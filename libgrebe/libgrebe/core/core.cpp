#include <libgrebe/core/core.hpp>
#include <libgrebe/core/mmu/bootrom.hpp>
#include <libgrebe/core/mmu/hardware_registers_addressable.hpp>
#include <libgrebe/core/mmu/hram.hpp>
#include <libgrebe/core/mmu/vram.hpp>
#include <libgrebe/core/mmu/wram.hpp>
#include <libgrebe/memory_loader.hpp>
#include <memory>

Core::Core() : cpu(state), ppu(state)
{
	// don't register bootrom here
	initCommon();
	state.registers.a = 1;
	state.registers.setZeroFlag();
	state.registers.resetSubtractFlag();
	state.registers.resetHalfCarryFlag();
	state.registers.resetCarryFlag();
	state.registers.b = 0;
	state.registers.c = 0x13;
	state.registers.d = 0;
	state.registers.e = 0xd8;
	state.registers.h = 1;
	state.registers.l = 0x4d;
	state.registers.pc = 0x100;
	state.registers.sp = 0xfffe;

	state.hardwareRegisters.P1 = 0xCF;
	state.hardwareRegisters.SB = 0x00;
	state.hardwareRegisters.SC = 0x7E;
	state.hardwareRegisters.DIV_WIDE = 0xAB00;
	state.hardwareRegisters.TIMA = 0x00;
	state.hardwareRegisters.TMA = 0x00;
	state.hardwareRegisters.TAC = 0xF8;
	state.hardwareRegisters.IF = 0xE1;
	state.hardwareRegisters.NR10 = 0x80;
	state.hardwareRegisters.NR11 = 0xBF;
	state.hardwareRegisters.NR12 = 0xF3;
	state.hardwareRegisters.NR13 = 0xFF;
	state.hardwareRegisters.NR14 = 0xBF;
	state.hardwareRegisters.NR21 = 0x3F;
	state.hardwareRegisters.NR22 = 0x00;
	state.hardwareRegisters.NR23 = 0xFF;
	state.hardwareRegisters.NR24 = 0xBF;
	state.hardwareRegisters.NR30 = 0x7F;
	state.hardwareRegisters.NR31 = 0xFF;
	state.hardwareRegisters.NR32 = 0x9F;
	state.hardwareRegisters.NR33 = 0xFF;
	state.hardwareRegisters.NR34 = 0xBF;
	state.hardwareRegisters.NR41 = 0xFF;
	state.hardwareRegisters.NR42 = 0x00;
	state.hardwareRegisters.NR43 = 0x00;
	state.hardwareRegisters.NR44 = 0xBF;
	state.hardwareRegisters.NR50 = 0x77;
	state.hardwareRegisters.NR51 = 0xF3;
	state.hardwareRegisters.NR52 = 0xF1;
	state.hardwareRegisters.LCDC = 0x91;
	state.hardwareRegisters.STAT = 0x85;
	state.hardwareRegisters.SCY = 0x00;
	state.hardwareRegisters.SCX = 0x00;
	state.hardwareRegisters.LY = 0x00;
	state.hardwareRegisters.LYC = 0x00;
	state.hardwareRegisters.DMA = 0xFF;
	state.hardwareRegisters.BGP = 0xFC;
	state.hardwareRegisters.WY = 0x00;
	state.hardwareRegisters.WX = 0x00;
	state.hardwareRegisters.IE = 0x00;
}

Core::Core(const std::string& bootromPath) : cpu(state), ppu(state)
{
	// register bootrom here
	state.mmu.registerAddressable(std::make_unique<Bootrom>());
	initCommon();
	MemoryLoader::LoadBootRom(state.mmu, bootromPath);
	state.registers.pc = 0x00;
}

void Core::initCommon()
{
	state.mmu.registerAddressable(std::make_unique<WRAM>());
	state.mmu.registerAddressable(std::make_unique<VRAM>());
	state.mmu.registerAddressable(std::make_unique<HRAM>());
	state.mmu.registerAddressable(std::make_unique<HardwareRegistersAddressable>(state.hardwareRegisters));
}

void Core::tick()
{
	cpu.tick();
	ppu.tick();
	// state.tick();
}

void Core::run(bool& run)
{
	while (run)
	{
		tick();
		++state.clockCycles;
	}
}
