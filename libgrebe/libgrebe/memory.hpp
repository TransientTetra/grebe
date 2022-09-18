#ifndef LIBGREBE_MEMORY_HPP
#define LIBGREBE_MEMORY_HPP

#include <libgrebe/types.hpp>

#define LIBGEMU_MEMORY_SIZE 0x10000
// Game Boy Memory Areas
//	$FFFF		Interrupt Enable Flag
//	$FF80-$FFFE 	Zero Page - 127 bytes
//	$FF00-$FF7F 	Hardware I/O Registers
//	$FEA0-$FEFF 	Unusable Memory
//	$FE00-$FE9F 	OAM - Object Attribute Memory
//	$E000-$FDFF 	Echo RAM - Reserved, Do Not Use
//	$D000-$DFFF 	Internal RAM - Bank 1-7 (switchable - CGB only)
//	$C000-$CFFF 	Internal RAM - Bank 0 (fixed)
//	$A000-$BFFF 	Cartridge RAM (If Available)
//	$9C00-$9FFF 	BG Map Data 2
//	$9800-$9BFF 	BG Map Data 1
//	$8000-$97FF 	Character RAM
//	$4000-$7FFF 	Cartridge ROM - Switchable Banks 1-xx
//	$0150-$3FFF 	Cartridge ROM - Bank 0 (fixed)
//	$0100-$014F 	Cartridge Header Area
//	$0000-$00FF 	Restart and Interrupt Vectors
class Memory
{
private:
	// all mapped memory, includes ram and vram and rom
	Byte map[LIBGEMU_MEMORY_SIZE];
public:
	[[nodiscard]] const Byte& read(const Word& address) const;
	[[nodiscard]] Word readWord(const Word& address) const;
	void write(const Word& address, const Byte& data);
	void writeWord(const Word& address, const Word& data);
	bool operator==(const Memory& other) const;
	Memory& operator=(const Memory& other);
};


#endif //LIBGREBE_MEMORY_HPP