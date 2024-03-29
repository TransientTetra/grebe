#ifndef LIBGREBE_MEMORY_LOADER_HPP
#define LIBGREBE_MEMORY_LOADER_HPP
#include <libgrebe/core/mmu/mmu.hpp>
#include <string>

struct InvalidBootRomException : public std::exception
{
	[[nodiscard]] const char* what() const noexcept override
	{
		return "Invalid boot rom file or file not found";
	}
};

class MemoryLoader
{
public:
	static void LoadBootRom(MMU& memory, const std::string& path);
};

#endif // LIBGREBE_MEMORY_LOADER_HPP
