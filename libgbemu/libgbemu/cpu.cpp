#include <libgbemu/cpu.hpp>

void CPU::handleUndefinedOpcode(State& state)
{

}

void CPU::execute(State& state)
{
	Memory& memory = state.memory;
	Registers& registers = state.registers;
	const Byte& current = memory.read(registers.pc);
	registers.pc += 1;
	switch(current)
	{
	// Undefined
		case 0xD3:
		case 0xE3:
		case 0xE4:
		case 0xF4:
		case 0xDB:
		case 0xDD:
		case 0xEB:
		case 0xEC:
		case 0xED:
		case 0xFC:
		case 0xFD:
			handleUndefinedOpcode(state);
			return;
	// Misc
		// 0x00 NOP
		case 0x00:
			break;
		// 0x10 STOP
		// 0xF3 DI
		// 0x76 HALT
		// 0xFB EI
	// 8-bit loads
		// 0x02 LD (BC), A
		case 0x02:
			memory.write(registers.bc, registers.a);
			break;
		// 0x06 LD B, n
		case 0x06:
			registers.b = memory.read(registers.pc);
			registers.pc += 1;
			break;
		// 0x0A LD A, (BC)
		case 0x0A:
			registers.a = memory.read(registers.bc);
			break;
		// 0x0E LD C, n
		case 0x0E:
			registers.c = memory.read(registers.pc);
			registers.pc += 1;
			break;
		// 0x12 LD (DE), A
		case 0x12:
			memory.write(registers.de, registers.a);
			break;
		// 0x16 LD D, n
		case 0x16:
			registers.d = memory.read(registers.pc);
			registers.pc += 1;
			break;
		// 0x1A LD A, (DE)
		case 0x1A:
			registers.a = memory.read(registers.de);
			break;
		// 0x1E LD E, n
		case 0x1E:
			registers.e = memory.read(registers.pc);
			registers.pc += 1;
			break;
		// 0x22 LD (HL+), A
		case 0x22:
			memory.write(registers.hl, registers.a);
			registers.hl += 1;
			break;
		// 0x26 LD H, n
		case 0x26:
			registers.h = memory.read(registers.pc);
			registers.pc += 1;
			break;
		// 0x2A LD A, (HL+)
		case 0x2A:
			registers.a = memory.read(registers.hl);
			registers.hl += 1;
			break;
		// 0x2E LD L, n
		case 0x2E:
			registers.l = memory.read(registers.pc);
			registers.pc += 1;
			break;
		// 0x32 LD (HL-), A
		case 0x32:
			memory.write(registers.hl, registers.a);
			registers.hl -= 1;
			break;
		// 0x36 LD (HL), n
		case 0x36:
			memory.write(registers.hl, memory.read(registers.pc));
			registers.pc += 1;
			break;
		// 0x3A LD A, (HL-)
		case 0x3A:
			registers.a = memory.read(registers.hl);
			registers.hl -= 1;
			break;
		// 0x3E LD A, n
		case 0x3E:
			registers.a = memory.read(registers.pc);
			registers.pc += 1;
			break;
		// 0x40 LD B, B
		case 0x40:
			break;
		// 0x41 LD B, C
		case 0x41:
			registers.b = registers.c;
			break;
		// 0x42 LD B, D
		case 0x42:
			registers.b = registers.d;
			break;
		// 0x43 LD B, E
		case 0x43:
			registers.b = registers.e;
			break;
		// 0x44 LD B, H
		case 0x44:
			registers.b = registers.h;
			break;
		// 0x45 LD B, L
		case 0x45:
			registers.b = registers.l;
			break;
		// 0x46 LD B, (HL)
		case 0x46:
			registers.b = memory.read(registers.hl);
			break;
		// 0x47 LD B, A
		case 0x47:
			registers.b = registers.a;
			break;
		// 0x48 LD C, B
		case 0x48:
			registers.c = registers.b;
			break;
		// 0x49 LD C, C
		case 0x49:
			break;
		// 0x4A LD C, D
		case 0x4A:
			registers.c = registers.d;
			break;
		// 0x4B LD C, E
		case 0x4B:
			registers.c = registers.e;
			break;
		// 0x4C LD C, H
		case 0x4C:
			registers.c = registers.h;
			break;
		// 0x4D LD C, L
		case 0x4D:
			registers.c = registers.l;
			break;
		// 0x4E LD C, (HL)
		case 0x4E:
			registers.c = memory.read(registers.hl);
			break;
		// 0x4F LD C, A
		case 0x4F:
			registers.c = registers.a;
			break;
		// 0x50 LD D, B
		case 0x50:
			registers.d = registers.b;
			break;
		// 0x51 LD D, C
		case 0x51:
			registers.d = registers.c;
			break;
		// 0x52 LD D, D
		case 0x52:
			break;
		// 0x53 LD D, E
		case 0x53:
			registers.d = registers.e;
			break;
		// 0x54 LD D, H
		case 0x54:
			registers.d = registers.h;
			break;
		// 0x55 LD D, L
		case 0x55:
			registers.d = registers.l;
			break;
		// 0x56 LD D, (HL)
		case 0x56:
			registers.d = memory.read(registers.hl);
			break;
		// 0x57 LD D, A
		case 0x57:
			registers.d = registers.a;
			break;
		// 0x58 LD E, B
		case 0x58:
			registers.e = registers.b;
			break;
		// 0x59 LD E, C
		case 0x59:
			registers.e = registers.c;
			break;
		// 0x5A LD E, D
		case 0x5A:
			registers.e = registers.d;
			break;
		// 0x5B LD E, E
		case 0x5B:
			break;
		// 0x5C LD E, H
		case 0x5C:
			registers.e = registers.h;
			break;
		// 0x5D LD E, L
		case 0x5D:
			registers.e = registers.l;
			break;
		// 0x5E LD E, (HL)
		case 0x5E:
			registers.e = memory.read(registers.hl);
			break;
		// 0x5F LD E, A
		case 0x5F:
			registers.e = registers.a;
			break;
		// 0x60 LD H, B
		case 0x60:
			registers.h = registers.b;
			break;
		// 0x61 LD H, C
		case 0x61:
			registers.h = registers.c;
			break;
		// 0x62 LD H, D
		case 0x62:
			registers.h =  registers.d;
			break;
		// 0x63 LD H, E
		case 0x63:
			registers.h = registers.e;
			break;
		// 0x64 LD H, H
		case 0x64:
			break;
		// 0x65 LD H, L
		case 0x65:
			registers.h = registers.l;
			break;
		// 0x66 LD H, (HL)
		case 0x66:
			registers.h = memory.read(registers.hl);
			break;
		// 0x67 LD H, A
		case 0x67:
			registers.h = registers.a;
			break;
		// 0x68 LD L, B
		case 0x68:
			registers.l = registers.b;
			break;
		// 0x69 LD L, C
		case 0x69:
			registers.l = registers.c;
			break;
		// 0x6A LD L, D
		case 0x6A:
			registers.l = registers.d;
			break;
		// 0x6B LD L, E
		case 0x6B:
			registers.l = registers.e;
			break;
		// 0x6C LD L, H
		case 0x6C:
			registers.l = registers.h;
			break;
		// 0x6D LD L, L
		case 0x6D:
			break;
		// 0x6E LD L, (HL)
		case 0x6E:
			registers.l = memory.read(registers.hl);
			break;
		// 0x6F LD L, A
		case 0x6F:
			registers.l = registers.a;
			break;
		// 0x70 LD (HL), B
		case 0x70:
			memory.write(registers.hl, registers.b);
			break;
		// 0x71 LD (HL), C
		case 0x71:
			memory.write(registers.hl, registers.c);
			break;
		// 0x72 LD (HL), D
		case 0x72:
			memory.write(registers.hl, registers.d);
			break;
		// 0x73 LD (HL), E
		case 0x73:
			memory.write(registers.hl, registers.e);
			break;
		// 0x74 LD (HL), H
		case 0x74:
			memory.write(registers.hl, registers.h);
			break;
		// 0x75 LD (HL), L
		case 0x75:
			memory.write(registers.hl, registers.l);
			break;
		// 0x77 LD (HL), A
		case 0x77:
			memory.write(registers.hl, registers.a);
			break;
		// 0x78 LD A, B
		case 0x78:
			registers.a = registers.b;
			break;
		// 0x79 LD A, C
		case 0x79:
			registers.a = registers.c;
			break;
		// 0x7A LD A, D
		case 0x7A:
			registers.a = registers.d;
			break;
		// 0x7B LD A, E
		case 0x7B:
			registers.a = registers.e;
			break;
		// 0x7C LD A, H
		case 0x7C:
			registers.a = registers.h;
			break;
		// 0x7D LD A, L
		case 0x7D:
			registers.a = registers.l;
			break;
		// 0x7E LD A, (HL)
		case 0x7E:
			registers.a = memory.read(registers.hl);
			break;
		// 0x7F LD A, A
		case 0x7F:
			registers.a = registers.a;
			break;
		// 0xE0 LDH (n), A
		case 0xE0:
			memory.write(0xFF00 | memory.read(registers.pc), registers.a);
			registers.pc += 1;
			break;
		// 0xE2 LDH (C), A
		case 0xE2:
			memory.write(0xFF00 | registers.c, registers.a);
			break;
		// 0xEA LD (nn), A
		case 0xEA:
			memory.write(memory.readWord(registers.pc), registers.a);
			registers.pc += 2;
			break;
		// 0xF0 LDH A, (n)
		case 0xF0:
			registers.a = memory.read(0xFF00 | memory.read(registers.pc));
			registers.pc += 1;
			break;
		// 0xF2 LDH A, (C)
		case 0xF2:
			registers.a = memory.read(0xFF00 | registers.c);
			break;
		// 0xFA LD A, (nn)
		case 0xFA:
			registers.a = memory.read(memory.readWord(registers.pc));
			registers.pc += 2;
			break;
	// 16-bit loads
		// 0x01 LD BC, nn
		case 0x01:
			registers.bc = memory.readWord(registers.pc);
			registers.pc += 2;
			break;
		// 0x08 LD (nn), SP
		case 0x08:
			memory.writeWord(memory.readWord(registers.pc), registers.sp);
			registers.pc += 2;
			break;
		// 0x11 LD DE, nn
		case 0x11:
			registers.de = memory.readWord(registers.pc);
			registers.pc += 2;
			break;
		// 0x21 LD HL, nn
		case 0x21:
			registers.hl = memory.readWord(registers.pc);
			registers.pc += 2;
			break;
		// 0x31 LD SP, nn
		case 0x31:
			registers.sp = memory.readWord(registers.pc);
			registers.pc += 2;
			break;
		// 0xC1 POP BC
		case 0xC1:
			registers.bc = memory.readWord(registers.sp);
			registers.sp += 2;
			break;
		// 0xD1 POP DE
		case 0xD1:
			registers.de = memory.readWord(registers.sp);
			registers.sp += 2;
			break;
		// 0xE1 POP HL
		case 0xE1:
			registers.hl = memory.readWord(registers.sp);
			registers.sp += 2;
			break;
		// 0xF1 POP AF
		case 0xF1:
			registers.af = memory.readWord(registers.sp);
			registers.sp += 2;
			break;
		// 0xC5 PUSH BC
		case 0xC5:
			registers.sp -= 2;
			memory.writeWord(registers.sp, registers.bc);
			break;
		// 0xD5 PUSH DE
		case 0xD5:
			registers.sp -= 2;
			memory.writeWord(registers.sp, registers.de);
			break;
		// 0xE5 PUSH HL
		case 0xE5:
			registers.sp -= 2;
			memory.writeWord(registers.sp, registers.hl);
			break;
		// 0xF5 PUSH AF
		case 0xF5:
			registers.sp -= 2;
			memory.writeWord(registers.sp, registers.af);
			break;
		// 0xF8 LD HL, SP+e
		case 0xF8: // this is highly sus
		{
			SignedByte e = static_cast<SignedByte>(memory.read(registers.pc));
			registers.hl = registers.sp + e;
			registers.f &= 0b00001111; // clearing flags
			if (e >= 0)
			{
				if (((registers.sp & 0xf) + (e & 0xf)) > 0xf)
					registers.f |= 0b00100000; // half carry flag
				if ((registers.sp & 0xff) + e > 0xff)
					registers.f |= 0b00010000; // carry flag
			}
			else
			{
				if (((registers.sp + e) & 0xf) >= (registers.sp & 0xf))
					registers.f |= 0b00100000; // half carry flag
				if (((registers.sp + e) & 0xff) >= (registers.sp & 0xff))
					registers.f |= 0b00010000; // carry flag
			}
			registers.pc += 1;
			break;
		}
		// 0xF9 LD SP, HL
		case 0xF9:
			registers.sp = registers.hl;
			break;
	// 8-bit arithmetic
		// 0x04 INC B
		// 0x14 INC D
		// 0x24 INC H
		// 0x34 INC (HL)
		// 0x0C INC C
		// 0x1C INC E
		// 0x2C INC L
		// 0x3C INC A
		// 0x05 DEC B
		// 0x15 DEC D
		// 0x25 DEC H
		// 0x35 DEC (HL)
		// 0x0D DEC C
		// 0x1D DEC E
		// 0x2D DEC L
		// 0x3D DEC A
		// 0x80 ADD B
		// 0x81 ADD C
		// 0x82 ADD D
		// 0x83 ADD E
		// 0x84 ADD H
		// 0x85 ADD L
		// 0x86 ADD (HL)
		// 0x87 ADD A
		// 0x88 ADC B
		// 0x89 ADC C
		// 0x8A ADC D
		// 0x8B ADC E
		// 0x8C ADC H
		// 0x8D ADC L
		// 0x8E ADC (HL)
		// 0x8F ADC A
		// 0x90 SUB B
		// 0x91 SUB C
		// 0x92 SUB D
		// 0x93 SUB E
		// 0x94 SUB H
		// 0x95 SUB L
		// 0x96 SUB (HL)
		// 0x97 SUB A
		// 0x98 SBC B
		// 0x99 SBC C
		// 0x9A SBC D
		// 0x9B SBC E
		// 0x9C SBC H
		// 0x9D SBC L
		// 0x9E SBC (HL)
		// 0x9F SBC A
		// 0xA0 AND B
		// 0xA1 AND C
		// 0xA2 AND D
		// 0xA3 AND E
		// 0xA4 AND H
		// 0xA5 AND L
		// 0xA6 AND (HL)
		// 0xA7 AND A
		// 0xA8 XOR B
		// 0xA9 XOR C
		// 0xAA XOR D
		// 0xAB XOR E
		// 0xAC XOR H
		// 0xAD XOR L
		// 0xAE XOR (HL)
		// 0xAF XOR A
		// 0xB0 OR B
		// 0xB1 OR C
		// 0xB2 OR D
		// 0xB3 OR E
		// 0xB4 OR H
		// 0xB5 OR L
		// 0xB6 OR (HL)
		// 0xB7 OR A
		// 0xB8 CP B
		// 0xB9 CP C
		// 0xBA CP D
		// 0xBB CP E
		// 0xBC CP H
		// 0xBD CP L
		// 0xBE CP (HL)
		// 0xBF CP A
		// 0xC6 ADD n
		// 0xD6 SUB n
		// 0xE6 AND n
		// 0xF6 OR n
		// 0xCE ADC n
		// 0xDE SBC n
		// 0xEE XOR n
		// 0xFE CP n
		// 0x27 DAA
		// 0x37 SCF
		// 0x2F CPL
		// 0x3F CCF
		default:
			handleUndefinedOpcode(state);
			return;
	}
}
