#ifndef LIBGREBE_CPU_HPP
#define LIBGREBE_CPU_HPP

#include <libgrebe/types.hpp>
#include <libgrebe/state.hpp>

//Sharp LR35902 SOC
//Sharp SM83 CPU
class CPU
{
private:

	void handleUndefinedOpcode(State& state);

	static void opcodeINC(State& state, Byte& operand);
	static void opcodeDEC(State& state, Byte& operand);
	static void opcodeADD(State& state, const Byte& operand);
	static void opcodeADC(State& state, const Byte& operand);
	static void opcodeSUB(State& state, const Byte& operand);
	static void opcodeSBC(State& state, const Byte& operand);
	static void opcodeAND(State& state, const Byte& operand);
	static void opcodeXOR(State& state, const Byte& operand);
	static void opcodeOR(State& state, const Byte& operand);
	static void opcodeCP(State& state, const Byte& operand);

public:
	void execute(State& state);
};


#endif //LIBGREBE_CPU_HPP