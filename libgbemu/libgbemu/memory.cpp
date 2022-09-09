#include "memory.hpp"

const Byte& Memory::read(const Word& address) const
{
	return map[address];
}

void Memory::write(const Word& address, const Byte& data)
{
	map[address] = data;
}

bool Memory::operator==(const Memory& other) const
{
	for (int i = 0; i < LIBGEMU_MEMORY_SIZE; ++i)
	{
		if (read(i) != other.read(i)) return false;
	}
	return true;
}

Memory& Memory::operator=(const Memory& other) // NOLINT(bugprone-unhandled-self-assignment)
{
	for (int i = 0; i < LIBGEMU_MEMORY_SIZE; ++i)
	{
		write(i, other.read(i));
	}
	return *this;
}

//void Memory::write(const Word& address, const Word& data)
//{
//	write(address, static_cast<Byte>(data >> 8));
//	write(address, static_cast<Byte>(data & 0x00ff));
//}
