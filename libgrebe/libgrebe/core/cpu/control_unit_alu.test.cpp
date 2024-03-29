#include <libgrebe/core/cpu/control_unit.test.hpp>

TEST_F(OpcodesAluTest, Test0x27)
{
	// 0x27 DAA
	// preparing cpu and memory state before executing the opcode
	state.registers.setA(0);
	state.registers.setB(0);
	testOpcode(0x80);
	// testing the opcode
	testOpcode(0x27);
	// expected change in registers and memory
	expectedState.clockCycles += 4;
	expectedState.registers.incPC();
	expectedState.registers.setA(0);
	expectedState.registers.setZeroFlag();
	expectedState.registers.resetHalfCarryFlag();
	expectedState.registers.resetCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setA(0);
	state.registers.setB(0x32);
	testOpcode(0x80);
	// testing the opcode
	testOpcode(0x27);
	// expected change in registers and memory
	expectedState.clockCycles += 4;
	expectedState.registers.incPC();
	expectedState.registers.setA(0x32);
	expectedState.registers.resetZeroFlag();
	expectedState.registers.resetHalfCarryFlag();
	expectedState.registers.resetCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setA(0x11);
	state.registers.setB(0x12);
	testOpcode(0x80);
	// testing the opcode
	testOpcode(0x27);
	// expected change in registers and memory
	expectedState.clockCycles += 4;
	expectedState.registers.incPC();
	expectedState.registers.setA(0x23);
	expectedState.registers.resetZeroFlag();
	expectedState.registers.resetHalfCarryFlag();
	expectedState.registers.resetCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setA(0x51);
	state.registers.setB(0x63);
	testOpcode(0x80);
	// testing the opcode
	testOpcode(0x27);
	// expected change in registers and memory
	expectedState.clockCycles += 4;
	expectedState.registers.incPC();
	expectedState.registers.setA(0x14);
	expectedState.registers.resetZeroFlag();
	expectedState.registers.resetHalfCarryFlag();
	expectedState.registers.setCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setA(0x36);
	state.registers.setB(0x12);
	testOpcode(0x90);
	// testing the opcode
	testOpcode(0x27);
	// expected change in registers and memory
	expectedState.clockCycles += 4;
	expectedState.registers.incPC();
	expectedState.registers.setA(0x24);
	expectedState.registers.resetZeroFlag();
	expectedState.registers.resetHalfCarryFlag();
	expectedState.registers.resetCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setA(0x36);
	state.registers.setB(0x36);
	testOpcode(0x90);
	// testing the opcode
	testOpcode(0x27);
	// expected change in registers and memory
	expectedState.clockCycles += 4;
	expectedState.registers.incPC();
	expectedState.registers.setA(0);
	expectedState.registers.setZeroFlag();
	expectedState.registers.resetHalfCarryFlag();
	expectedState.registers.resetCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// todo below
	//	// preparing cpu and memory state before executing the opcode
	//	state.registers.setA ( 0x19);
	//	state.registers.setB ( 0x36);
	//	testOpcode(0x90);
	//	// testing the opcode
	//	testOpcode(0x27);
	//	// expected change in registers and memory
	//	expectedState.registers.incPC ();
	//	expectedState.registers.setA ( 0x17);
	//	expectedState.registers.resetZeroFlag();
	//	expectedState.registers.resetHalfCarryFlag();
	//	expectedState.registers.setCarryFlag();
	//	// comparing expected change to real change
	//	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesAluTest, Test0x37)
{
	// 0x37 SCF
	// preparing cpu and memory state before executing the opcode
	state.registers.setF(0xff);
	// testing the opcode
	testOpcode(0x37);
	// expected change in registers and memory
	expectedState.clockCycles += 4;
	expectedState.registers.incPC();
	expectedState.registers.resetSubtractFlag();
	expectedState.registers.resetHalfCarryFlag();
	expectedState.registers.setCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setF(0);
	// testing the opcode
	testOpcode(0x37);
	// expected change in registers and memory
	expectedState.clockCycles += 4;
	expectedState.registers.incPC();
	expectedState.registers.resetSubtractFlag();
	expectedState.registers.resetHalfCarryFlag();
	expectedState.registers.setCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesAluTest, Test0x2F)
{
	// 0x2F CPL
	// preparing cpu and memory state before executing the opcode
	state.registers.setA(0xff);
	// testing the opcode
	testOpcode(0x2F);
	// expected change in registers and memory
	expectedState.clockCycles += 4;
	expectedState.registers.incPC();
	expectedState.registers.setA(0x00);
	expectedState.registers.setSubtractFlag();
	expectedState.registers.setHalfCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setA(0b10101010);
	// testing the opcode
	testOpcode(0x2F);
	// expected change in registers and memory
	expectedState.clockCycles += 4;
	expectedState.registers.incPC();
	expectedState.registers.setA(0b01010101);
	expectedState.registers.setSubtractFlag();
	expectedState.registers.setHalfCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesAluTest, Test0x3F)
{
	// 0x3F CCF
	// preparing cpu and memory state before executing the opcode
	state.registers.setF(0xff);
	// testing the opcode
	testOpcode(0x3F);
	// expected change in registers and memory
	expectedState.clockCycles += 4;
	expectedState.registers.incPC();
	expectedState.registers.resetSubtractFlag();
	expectedState.registers.resetHalfCarryFlag();
	expectedState.registers.resetCarryFlag();
	expectedState.registers.setZeroFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setF(0);
	// testing the opcode
	testOpcode(0x3F);
	// expected change in registers and memory
	expectedState.clockCycles += 4;
	expectedState.registers.incPC();
	expectedState.registers.resetSubtractFlag();
	expectedState.registers.resetHalfCarryFlag();
	expectedState.registers.resetCarryFlag();
	expectedState.registers.setCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesAluTest, Test0x03)
{
	// 0x03 INC BC
	// preparing cpu and memory state before executing the opcode
	state.registers.setBC(0);
	// testing the opcode
	testOpcode(0x03);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.setBC(1);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setBC(0xffff);
	// testing the opcode
	testOpcode(0x03);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.setBC(0);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesAluTest, Test0x13)
{
	// 0x13 INC DE
	// preparing cpu and memory state before executing the opcode
	state.registers.setDE(0);
	// testing the opcode
	testOpcode(0x13);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.setDE(1);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setDE(0xffff);
	// testing the opcode
	testOpcode(0x13);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.setDE(0);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesAluTest, Test0x23)
{
	// 0x23 INC HL
	// preparing cpu and memory state before executing the opcode
	state.registers.setHL(0);
	// testing the opcode
	testOpcode(0x23);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.setHL(1);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setHL(0xffff);
	// testing the opcode
	testOpcode(0x23);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.setHL(0);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesAluTest, Test0x33)
{
	// 0x33 INC SP
	// preparing cpu and memory state before executing the opcode
	state.registers.setSP(0);
	// testing the opcode
	testOpcode(0x33);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.setSP(1);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setSP(0xffff);
	// testing the opcode
	testOpcode(0x33);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.setSP(0);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesAluTest, Test0x09)
{
	// 0x09 ADD HL, BC
	// preparing cpu and memory state before executing the opcode
	state.registers.setHL(0);
	state.registers.setBC(0);
	// testing the opcode
	testOpcode(0x09);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.resetSubtractFlag();
	expectedState.registers.resetHalfCarryFlag();
	expectedState.registers.resetCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setHL(3);
	state.registers.setBC(2);
	// testing the opcode
	testOpcode(0x09);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.setHL(5);
	expectedState.registers.resetSubtractFlag();
	expectedState.registers.resetHalfCarryFlag();
	expectedState.registers.resetCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setHL(0x0fff);
	state.registers.setBC(1);
	// testing the opcode
	testOpcode(0x09);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.setHL(0x1000);
	expectedState.registers.resetSubtractFlag();
	expectedState.registers.setHalfCarryFlag();
	expectedState.registers.resetCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setHL(0xffff);
	state.registers.setBC(1);
	// testing the opcode
	testOpcode(0x09);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.setHL(0x0000);
	expectedState.registers.resetSubtractFlag();
	expectedState.registers.setHalfCarryFlag();
	expectedState.registers.setCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setHL(0xf000);
	state.registers.setBC(0x1000);
	// testing the opcode
	testOpcode(0x09);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.setHL(0x0000);
	expectedState.registers.resetSubtractFlag();
	expectedState.registers.resetHalfCarryFlag();
	expectedState.registers.setCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesAluTest, Test0x19)
{
	// 0x19 ADD HL, DE
	// preparing cpu and memory state before executing the opcode
	state.registers.setHL(0);
	state.registers.setDE(0);
	// testing the opcode
	testOpcode(0x19);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.resetSubtractFlag();
	expectedState.registers.resetHalfCarryFlag();
	expectedState.registers.resetCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setHL(3);
	state.registers.setDE(2);
	// testing the opcode
	testOpcode(0x19);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.setHL(5);
	expectedState.registers.resetSubtractFlag();
	expectedState.registers.resetHalfCarryFlag();
	expectedState.registers.resetCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setHL(0x0fff);
	state.registers.setDE(1);
	// testing the opcode
	testOpcode(0x19);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.setHL(0x1000);
	expectedState.registers.resetSubtractFlag();
	expectedState.registers.setHalfCarryFlag();
	expectedState.registers.resetCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setHL(0xffff);
	state.registers.setDE(1);
	// testing the opcode
	testOpcode(0x19);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.setHL(0x0000);
	expectedState.registers.resetSubtractFlag();
	expectedState.registers.setHalfCarryFlag();
	expectedState.registers.setCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setHL(0xf000);
	state.registers.setDE(0x1000);
	// testing the opcode
	testOpcode(0x19);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.setHL(0x0000);
	expectedState.registers.resetSubtractFlag();
	expectedState.registers.resetHalfCarryFlag();
	expectedState.registers.setCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesAluTest, Test0x29)
{
	// 0x29 ADD HL, HL
	// preparing cpu and memory state before executing the opcode
	state.registers.setHL(0);
	// testing the opcode
	testOpcode(0x29);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.resetSubtractFlag();
	expectedState.registers.resetHalfCarryFlag();
	expectedState.registers.resetCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setHL(3);
	// testing the opcode
	testOpcode(0x29);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.setHL(6);
	expectedState.registers.resetSubtractFlag();
	expectedState.registers.resetHalfCarryFlag();
	expectedState.registers.resetCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setHL(0x0fff);
	// testing the opcode
	testOpcode(0x29);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.setHL(0x1ffe);
	expectedState.registers.resetSubtractFlag();
	expectedState.registers.setHalfCarryFlag();
	expectedState.registers.resetCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setHL(0xffff);
	// testing the opcode
	testOpcode(0x29);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.setHL(0xfffe);
	expectedState.registers.resetSubtractFlag();
	expectedState.registers.setHalfCarryFlag();
	expectedState.registers.setCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setHL(0xf000);
	// testing the opcode
	testOpcode(0x29);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.setHL(0xe000);
	expectedState.registers.resetSubtractFlag();
	expectedState.registers.resetHalfCarryFlag();
	expectedState.registers.setCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesAluTest, Test0x39)
{
	// 0x39 ADD HL, SP
	// preparing cpu and memory state before executing the opcode
	state.registers.setHL(0);
	state.registers.setSP(0);
	// testing the opcode
	testOpcode(0x39);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.resetSubtractFlag();
	expectedState.registers.resetHalfCarryFlag();
	expectedState.registers.resetCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setHL(3);
	state.registers.setSP(2);
	// testing the opcode
	testOpcode(0x39);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.setHL(5);
	expectedState.registers.resetSubtractFlag();
	expectedState.registers.resetHalfCarryFlag();
	expectedState.registers.resetCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setHL(0x0fff);
	state.registers.setSP(1);
	// testing the opcode
	testOpcode(0x39);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.setHL(0x1000);
	expectedState.registers.resetSubtractFlag();
	expectedState.registers.setHalfCarryFlag();
	expectedState.registers.resetCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setHL(0xffff);
	state.registers.setSP(1);
	// testing the opcode
	testOpcode(0x39);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.setHL(0x0000);
	expectedState.registers.resetSubtractFlag();
	expectedState.registers.setHalfCarryFlag();
	expectedState.registers.setCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setHL(0xf000);
	state.registers.setSP(0x1000);
	// testing the opcode
	testOpcode(0x39);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.setHL(0x0000);
	expectedState.registers.resetSubtractFlag();
	expectedState.registers.resetHalfCarryFlag();
	expectedState.registers.setCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesAluTest, Test0x0B)
{
	// 0x0B DEC BC
	// preparing cpu and memory state before executing the opcode
	state.registers.setBC(0);
	// testing the opcode
	testOpcode(0x0B);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.setBC(0xffff);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setBC(0xffff);
	// testing the opcode
	testOpcode(0x0B);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.setBC(0xfffe);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesAluTest, Test0x1B)
{
	// 0x1B DEC DE
	// preparing cpu and memory state before executing the opcode
	state.registers.setDE(0);
	// testing the opcode
	testOpcode(0x1B);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.setDE(0xffff);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setDE(0xffff);
	// testing the opcode
	testOpcode(0x1B);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.setDE(0xfffe);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesAluTest, Test0x2B)
{
	// 0x2B DEC HL
	// preparing cpu and memory state before executing the opcode
	state.registers.setHL(0);
	// testing the opcode
	testOpcode(0x2B);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.setHL(0xffff);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setHL(0xffff);
	// testing the opcode
	testOpcode(0x2B);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.setHL(0xfffe);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesAluTest, Test0x3B)
{
	// 0x3B DEC SP
	// preparing cpu and memory state before executing the opcode
	state.registers.setSP(0);
	// testing the opcode
	testOpcode(0x3B);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.setSP(0xffff);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setSP(0xffff);
	// testing the opcode
	testOpcode(0x3B);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.incPC();
	expectedState.registers.setSP(0xfffe);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesAluTest, Test0xE8)
{
	// 0xE8 ADD SP, r8
	// preparing cpu and memory state before executing the opcode
	state.registers.setSP(0);
	state.registers.setPC(0xdead);
	state.mmu.write(0xdeae, 0);
	// testing the opcode
	testOpcode(0xE8);
	// expected change in registers and memory
	expectedState.clockCycles += 16;
	expectedState.registers.setPC(expectedState.registers.getPC() + 2);
	expectedState.registers.clearFlags();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setSP(3);
	state.registers.setPC(0xdead);
	state.mmu.write(0xdeae, 2);
	// testing the opcode
	testOpcode(0xE8);
	// expected change in registers and memory
	expectedState.clockCycles += 16;
	expectedState.registers.setPC(expectedState.registers.getPC() + 2);
	expectedState.registers.setSP(5);
	expectedState.registers.clearFlags();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setSP(3);
	state.registers.setPC(0xdead);
	state.mmu.write(0xdeae, -2);
	// testing the opcode
	testOpcode(0xE8);
	// expected change in registers and memory
	expectedState.clockCycles += 16;
	expectedState.registers.setPC(expectedState.registers.getPC() + 2);
	expectedState.registers.setSP(1);
	expectedState.registers.clearFlags();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setSP(0xffff);
	state.registers.setPC(0xdead);
	state.mmu.write(0xdeae, -1);
	// testing the opcode
	testOpcode(0xE8);
	// expected change in registers and memory
	expectedState.clockCycles += 16;
	expectedState.registers.setPC(expectedState.registers.getPC() + 2);
	expectedState.registers.setSP(0xfffe);
	expectedState.registers.clearFlags();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setSP(0x000f);
	state.registers.setPC(0xdead);
	state.mmu.write(0xdeae, 1);
	// testing the opcode
	testOpcode(0xE8);
	// expected change in registers and memory
	expectedState.clockCycles += 16;
	expectedState.registers.setPC(expectedState.registers.getPC() + 2);
	expectedState.registers.setSP(0x0010);
	expectedState.registers.clearFlags();
	expectedState.registers.setHalfCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setSP(0xffff);
	state.registers.setPC(0xdead);
	state.mmu.write(0xdeae, 1);
	// testing the opcode
	testOpcode(0xE8);
	// expected change in registers and memory
	expectedState.clockCycles += 16;
	expectedState.registers.setPC(expectedState.registers.getPC() + 2);
	expectedState.registers.setSP(0x0000);
	expectedState.registers.clearFlags();
	expectedState.registers.setHalfCarryFlag();
	expectedState.registers.setCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setSP(0x00f0);
	state.registers.setPC(0xdead);
	state.mmu.write(0xdeae, 0x0010);
	// testing the opcode
	testOpcode(0xE8);
	// expected change in registers and memory
	expectedState.clockCycles += 16;
	expectedState.registers.setPC(expectedState.registers.getPC() + 2);
	expectedState.registers.setSP(0x0100);
	expectedState.registers.clearFlags();
	expectedState.registers.setCarryFlag();
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}
