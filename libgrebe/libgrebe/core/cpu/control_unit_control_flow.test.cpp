#include <libgrebe/core/cpu/control_unit.test.hpp>

TEST_F(OpcodesControlFlowTest, Test0x20)
{
	// 0x20 JR NZ, e
	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.mmu.write(0xdeae, 2);
	state.registers.setZeroFlag();
	// testing the opcode
	testOpcode(0x20);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.setPC(0xdeaf);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.mmu.write(0xdeae, 2);
	state.registers.resetZeroFlag();
	// testing the opcode
	testOpcode(0x20);
	// expected change in registers and memory
	expectedState.clockCycles += 12;
	expectedState.registers.setPC(0xdeb1);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.mmu.write(0xdeae, -2);
	state.registers.setZeroFlag();
	// testing the opcode
	testOpcode(0x20);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.setPC(0xdeaf);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.mmu.write(0xdeae, -2);
	state.registers.resetZeroFlag();
	// testing the opcode
	testOpcode(0x20);
	// expected change in registers and memory
	expectedState.clockCycles += 12;
	expectedState.registers.setPC(0xdead);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesControlFlowTest, Test0x30)
{
	// 0x30 JR NC, e
	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.mmu.write(0xdeae, 2);
	state.registers.setCarryFlag();
	// testing the opcode
	testOpcode(0x30);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.setPC(0xdeaf);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.mmu.write(0xdeae, 2);
	state.registers.resetCarryFlag();
	// testing the opcode
	testOpcode(0x30);
	// expected change in registers and memory
	expectedState.clockCycles += 12;
	expectedState.registers.setPC(0xdeb1);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.mmu.write(0xdeae, -2);
	state.registers.setCarryFlag();
	// testing the opcode
	testOpcode(0x30);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.setPC(0xdeaf);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.mmu.write(0xdeae, -2);
	state.registers.resetCarryFlag();
	// testing the opcode
	testOpcode(0x30);
	// expected change in registers and memory
	expectedState.clockCycles += 12;
	expectedState.registers.setPC(0xdead);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesControlFlowTest, Test0x18)
{
	// 0x18 JR e
	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.mmu.write(0xdeae, 2);
	// testing the opcode
	testOpcode(0x18);
	// expected change in registers and memory
	expectedState.clockCycles += 12;
	expectedState.registers.setPC(0xdeb1);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.mmu.write(0xdeae, -2);
	// testing the opcode
	testOpcode(0x18);
	// expected change in registers and memory
	expectedState.clockCycles += 12;
	expectedState.registers.setPC(0xdead);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesControlFlowTest, Test0x28)
{
	// 0x28 JR Z, e
	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.mmu.write(0xdeae, 2);
	state.registers.resetZeroFlag();
	// testing the opcode
	testOpcode(0x28);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.setPC(0xdeaf);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.mmu.write(0xdeae, 2);
	state.registers.setZeroFlag();
	// testing the opcode
	testOpcode(0x28);
	// expected change in registers and memory
	expectedState.clockCycles += 12;
	expectedState.registers.setPC(0xdeb1);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.mmu.write(0xdeae, -2);
	state.registers.resetZeroFlag();
	// testing the opcode
	testOpcode(0x28);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.setPC(0xdeaf);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.mmu.write(0xdeae, -2);
	state.registers.setZeroFlag();
	// testing the opcode
	testOpcode(0x28);
	// expected change in registers and memory
	expectedState.clockCycles += 12;
	expectedState.registers.setPC(0xdead);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesControlFlowTest, Test0x38)
{
	// 0x38 JR C, e
	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.mmu.write(0xdeae, 2);
	state.registers.resetCarryFlag();
	// testing the opcode
	testOpcode(0x38);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.setPC(0xdeaf);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.mmu.write(0xdeae, 2);
	state.registers.setCarryFlag();
	// testing the opcode
	testOpcode(0x38);
	// expected change in registers and memory
	expectedState.clockCycles += 12;
	expectedState.registers.setPC(0xdeb1);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.mmu.write(0xdeae, -2);
	state.registers.resetCarryFlag();
	// testing the opcode
	testOpcode(0x38);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.setPC(0xdeaf);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.mmu.write(0xdeae, -2);
	state.registers.setCarryFlag();
	// testing the opcode
	testOpcode(0x38);
	// expected change in registers and memory
	expectedState.clockCycles += 12;
	expectedState.registers.setPC(0xdead);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesControlFlowTest, Test0xC2)
{
	// 0xC2 JP NZ, nn
	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	writeWord(state, 0xdeae, 0xbeef);
	state.registers.setZeroFlag();
	// testing the opcode
	testOpcode(0xC2);
	// expected change in registers and memory
	expectedState.clockCycles += 12;
	expectedState.registers.setPC(expectedState.registers.getPC() + 3);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	writeWord(state, 0xdeae, 0xbeef);
	state.registers.resetZeroFlag();
	// testing the opcode
	testOpcode(0xC2);
	// expected change in registers and memory
	expectedState.clockCycles += 16;
	expectedState.registers.setPC(0xbeef);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesControlFlowTest, Test0xD2)
{
	// 0xD2 JP NC, nn
	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	writeWord(state, 0xdeae, 0xbeef);
	state.registers.setCarryFlag();
	// testing the opcode
	testOpcode(0xD2);
	// expected change in registers and memory
	expectedState.clockCycles += 12;
	expectedState.registers.setPC(expectedState.registers.getPC() + 3);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	writeWord(state, 0xdeae, 0xbeef);
	state.registers.resetCarryFlag();
	// testing the opcode
	testOpcode(0xD2);
	// expected change in registers and memory
	expectedState.clockCycles += 16;
	expectedState.registers.setPC(0xbeef);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesControlFlowTest, Test0xC3)
{
	// 0xC3 JP nn
	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	writeWord(state, 0xdeae, 0xbeef);
	// testing the opcode
	testOpcode(0xC3);
	// expected change in registers and memory
	expectedState.clockCycles += 16;
	expectedState.registers.setPC(0xbeef);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesControlFlowTest, Test0xE9)
{
	// 0xE9 JP HL
	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.registers.setHL(0xbeef);
	// testing the opcode
	testOpcode(0xE9);
	// expected change in registers and memory
	expectedState.clockCycles += 4;
	expectedState.registers.setPC(0xbeef);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesControlFlowTest, Test0xCA)
{
	// 0xCA JP Z, nn
	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	writeWord(state, 0xdeae, 0xbeef);
	state.registers.resetZeroFlag();
	// testing the opcode
	testOpcode(0xCA);
	// expected change in registers and memory
	expectedState.clockCycles += 12;
	expectedState.registers.setPC(expectedState.registers.getPC() + 3);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	writeWord(state, 0xdeae, 0xbeef);
	state.registers.setZeroFlag();
	// testing the opcode
	testOpcode(0xCA);
	// expected change in registers and memory
	expectedState.clockCycles += 16;
	expectedState.registers.setPC(0xbeef);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesControlFlowTest, Test0xDA)
{
	// 0xDA JP C, nn
	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	writeWord(state, 0xdeae, 0xbeef);
	state.registers.resetCarryFlag();
	// testing the opcode
	testOpcode(0xDA);
	// expected change in registers and memory
	expectedState.clockCycles += 12;
	expectedState.registers.setPC(expectedState.registers.getPC() + 3);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	writeWord(state, 0xdeae, 0xbeef);
	state.registers.setCarryFlag();
	// testing the opcode
	testOpcode(0xDA);
	// expected change in registers and memory
	expectedState.clockCycles += 16;
	expectedState.registers.setPC(0xbeef);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesControlFlowTest, Test0xCD)
{
	// 0xCD CALL nn
	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.registers.setSP(0x6969);
	writeWord(state, 0xdeae, 0xbeef);
	state.registers.resetZeroFlag();
	// testing the opcode
	testOpcode(0xCD);
	// expected change in registers and memory
	expectedState.clockCycles += 24;
	expectedState.registers.setSP(0x6967);
	expectedState.registers.setPC(0xbeef);
	writeWord(expectedState, 0x6967, 0xdead + 3);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesControlFlowTest, Test0xCC)
{
	// 0xCC CALL Z, nn
	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.registers.setSP(0x6969);
	writeWord(state, 0xdeae, 0xbeef);
	state.registers.resetZeroFlag();
	// testing the opcode
	testOpcode(0xCC);
	// expected change in registers and memory
	expectedState.clockCycles += 12;
	expectedState.registers.setPC(expectedState.registers.getPC() + 3);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.registers.setSP(0x6969);
	writeWord(state, 0xdeae, 0xbeef);
	state.registers.setZeroFlag();
	// testing the opcode
	testOpcode(0xCC);
	// expected change in registers and memory
	expectedState.clockCycles += 24;
	expectedState.registers.setSP(0x6967);
	expectedState.registers.setPC(0xbeef);
	writeWord(expectedState, 0x6967, 0xdead + 3);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesControlFlowTest, Test0xDC)
{
	// 0xDC CALL C, nn
	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.registers.setSP(0x6969);
	writeWord(state, 0xdeae, 0xbeef);
	state.registers.resetCarryFlag();
	// testing the opcode
	testOpcode(0xDC);
	// expected change in registers and memory
	expectedState.clockCycles += 12;
	expectedState.registers.setPC(expectedState.registers.getPC() + 3);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.registers.setSP(0x6969);
	writeWord(state, 0xdeae, 0xbeef);
	state.registers.setCarryFlag();
	// testing the opcode
	testOpcode(0xDC);
	// expected change in registers and memory
	expectedState.clockCycles += 24;
	expectedState.registers.setSP(0x6967);
	expectedState.registers.setPC(0xbeef);
	writeWord(expectedState, 0x6967, 0xdead + 3);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesControlFlowTest, Test0xC4)
{
	// 0xC4 CALL NZ, nn
	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.registers.setSP(0x6969);
	writeWord(state, 0xdeae, 0xbeef);
	state.registers.setZeroFlag();
	// testing the opcode
	testOpcode(0xC4);
	// expected change in registers and memory
	expectedState.clockCycles += 12;
	expectedState.registers.setPC(expectedState.registers.getPC() + 3);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.registers.setSP(0x6969);
	writeWord(state, 0xdeae, 0xbeef);
	state.registers.resetZeroFlag();
	// testing the opcode
	testOpcode(0xC4);
	// expected change in registers and memory
	expectedState.clockCycles += 24;
	expectedState.registers.setSP(0x6967);
	expectedState.registers.setPC(0xbeef);
	writeWord(expectedState, 0x6967, 0xdead + 3);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesControlFlowTest, Test0xD4)
{
	// 0xD4 CALL NC, nn
	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.registers.setSP(0x6969);
	writeWord(state, 0xdeae, 0xbeef);
	state.registers.setCarryFlag();
	// testing the opcode
	testOpcode(0xD4);
	// expected change in registers and memory
	expectedState.clockCycles += 12;
	expectedState.registers.setPC(expectedState.registers.getPC() + 3);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.registers.setSP(0x6969);
	writeWord(state, 0xdeae, 0xbeef);
	state.registers.resetCarryFlag();
	// testing the opcode
	testOpcode(0xD4);
	// expected change in registers and memory
	expectedState.clockCycles += 24;
	expectedState.registers.setSP(0x6967);
	expectedState.registers.setPC(0xbeef);
	writeWord(expectedState, 0x6967, 0xdead + 3);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesControlFlowTest, Test0xC0)
{
	// 0xC0 RET NZ
	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.registers.setSP(0x6969);
	writeWord(state, 0x6969, 0xbeef);
	state.registers.setZeroFlag();
	// testing the opcode
	testOpcode(0xC0);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.setPC(expectedState.registers.getPC() + 1);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.registers.setSP(0x6969);
	writeWord(state, 0x6969, 0xbeef);
	state.registers.resetZeroFlag();
	// testing the opcode
	testOpcode(0xC0);
	// expected change in registers and memory
	expectedState.clockCycles += 20;
	expectedState.registers.setPC(0xbeef);
	expectedState.registers.setSP(0x696B);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesControlFlowTest, Test0xD0)
{
	// 0xD0 RET NC
	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.registers.setSP(0x6969);
	writeWord(state, 0x6969, 0xbeef);
	state.registers.setCarryFlag();
	// testing the opcode
	testOpcode(0xD0);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.setPC(expectedState.registers.getPC() + 1);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.registers.setSP(0x6969);
	writeWord(state, 0x6969, 0xbeef);
	state.registers.resetCarryFlag();
	// testing the opcode
	testOpcode(0xD0);
	// expected change in registers and memory
	expectedState.clockCycles += 20;
	expectedState.registers.setPC(0xbeef);
	expectedState.registers.setSP(0x696B);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesControlFlowTest, Test0xC8)
{
	// 0xC8 RET Z
	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.registers.setSP(0x6967);
	writeWord(state, 0x6967, 0xbeef);
	state.registers.resetZeroFlag();
	// testing the opcode
	testOpcode(0xC8);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.setPC(expectedState.registers.getPC() + 1);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.registers.setSP(0x6967);
	writeWord(state, 0x6967, 0xbeef);
	state.registers.setZeroFlag();
	// testing the opcode
	testOpcode(0xC8);
	// expected change in registers and memory
	expectedState.clockCycles += 20;
	expectedState.registers.setSP(0x6969);
	expectedState.registers.setPC(0xbeef);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesControlFlowTest, Test0xD8)
{
	// 0xD8 RET C
	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.registers.setSP(0x6967);
	writeWord(state, 0x6967, 0xbeef);
	state.registers.resetCarryFlag();
	// testing the opcode
	testOpcode(0xD8);
	// expected change in registers and memory
	expectedState.clockCycles += 8;
	expectedState.registers.setPC(expectedState.registers.getPC() + 1);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));

	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.registers.setSP(0x6967);
	writeWord(state, 0x6967, 0xbeef);
	state.registers.setCarryFlag();
	// testing the opcode
	testOpcode(0xD8);
	// expected change in registers and memory
	expectedState.clockCycles += 20;
	expectedState.registers.setSP(0x6969);
	expectedState.registers.setPC(0xbeef);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesControlFlowTest, Test0xC9)
{
	// 0xC9 RET
	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.registers.setSP(0x6967);
	state.ime = false;
	writeWord(state, 0x6967, 0xbeef);
	// testing the opcode
	testOpcode(0xC9);
	// expected change in registers and memory
	expectedState.clockCycles += 16;
	expectedState.registers.setSP(0x6969);
	expectedState.registers.setPC(0xbeef);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesControlFlowTest, Test0xD9)
{
	// 0xD9 RETI
	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.registers.setSP(0x6967);
	state.ime = false;
	writeWord(state, 0x6967, 0xbeef);
	// testing the opcode
	testOpcode(0xD9);
	// expected change in registers and memory
	expectedState.clockCycles += 16;
	expectedState.ime = true;
	expectedState.registers.setSP(0x6969);
	expectedState.registers.setPC(0xbeef);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesControlFlowTest, Test0xC7)
{
	// 0xC7 RST 0x00
	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.registers.setSP(0x6969);
	// testing the opcode
	testOpcode(0xC7);
	// expected change in registers and memory
	expectedState.clockCycles += 16;
	expectedState.registers.setPC(0x00);
	expectedState.registers.setSP(0x6967);
	writeWord(expectedState, 0x6967, 0xdeae);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesControlFlowTest, Test0xD7)
{
	// 0xD7 RST 0x10
	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.registers.setSP(0x6969);
	// testing the opcode
	testOpcode(0xD7);
	// expected change in registers and memory
	expectedState.clockCycles += 16;
	expectedState.registers.setPC(0x10);
	expectedState.registers.setSP(0x6967);
	writeWord(expectedState, 0x6967, 0xdeae);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesControlFlowTest, Test0xE7)
{
	// 0xE7 RST 0x20
	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.registers.setSP(0x6969);
	// testing the opcode
	testOpcode(0xE7);
	// expected change in registers and memory
	expectedState.clockCycles += 16;
	expectedState.registers.setPC(0x20);
	expectedState.registers.setSP(0x6967);
	writeWord(expectedState, 0x6967, 0xdeae);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesControlFlowTest, Test0xF7)
{
	// 0xF7 RST 0x30
	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.registers.setSP(0x6969);
	// testing the opcode
	testOpcode(0xF7);
	// expected change in registers and memory
	expectedState.clockCycles += 16;
	expectedState.registers.setPC(0x30);
	expectedState.registers.setSP(0x6967);
	writeWord(expectedState, 0x6967, 0xdeae);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesControlFlowTest, Test0xCF)
{
	// 0xCF RST 0x08
	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.registers.setSP(0x6969);
	// testing the opcode
	testOpcode(0xCF);
	// expected change in registers and memory
	expectedState.clockCycles += 16;
	expectedState.registers.setPC(0x08);
	expectedState.registers.setSP(0x6967);
	writeWord(expectedState, 0x6967, 0xdeae);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesControlFlowTest, Test0xDF)
{
	// 0xDF RST 0x18
	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.registers.setSP(0x6969);
	// testing the opcode
	testOpcode(0xDF);
	// expected change in registers and memory
	expectedState.clockCycles += 16;
	expectedState.registers.setPC(0x18);
	expectedState.registers.setSP(0x6967);
	writeWord(expectedState, 0x6967, 0xdeae);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesControlFlowTest, Test0xEF)
{
	// 0xEF RST 0x28
	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.registers.setSP(0x6969);
	// testing the opcode
	testOpcode(0xEF);
	// expected change in registers and memory
	expectedState.clockCycles += 16;
	expectedState.registers.setPC(0x28);
	expectedState.registers.setSP(0x6967);
	writeWord(expectedState, 0x6967, 0xdeae);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}

TEST_F(OpcodesControlFlowTest, Test0xFF)
{
	// 0xFF RST 0x38
	// preparing cpu and memory state before executing the opcode
	state.registers.setPC(0xdead);
	state.registers.setSP(0x6969);
	// testing the opcode
	testOpcode(0xFF);
	// expected change in registers and memory
	expectedState.clockCycles += 16;
	expectedState.registers.setPC(0x38);
	expectedState.registers.setSP(0x6967);
	writeWord(expectedState, 0x6967, 0xdeae);
	// comparing expected change to real change
	EXPECT_TRUE(compareState(expectedState, state));
}
