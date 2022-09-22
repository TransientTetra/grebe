#include <libgrebe/cpu.hpp>

void CPU::decode(State& state, const Byte& opcode)
{
	switch(opcode)
	{
	// Misc
		// 0x00 NOP
		case 0x00:
			opcodeNOP(state);
			break;
		// 0x10 STOP
		case 0x10:
			opcodeSTOP(state);
			break;
		// 0xF3 DI
		case 0xF3:
			opcodeDI(state);
			break;
		// 0x76 HALT
		case 0x76:
			opcodeHALT(state);
			break;
		// 0xFB EI
		case 0xFB:
			opcodeEI(state);
			break;
	// 8-bit loads
		// 0x02 LD (BC), A
		case 0x02:
			opcodeLDmem(state.memory, state.registers.bc, state.registers.a);
			break;
		// 0x06 LD B, n
		case 0x06:
			opcodeLD(state.registers.b, state.memory.read(state.registers.pc++));
			break;
		// 0x0A LD A, (BC)
		case 0x0A:
			opcodeLD(state.registers.a, state.memory.read(state.registers.bc));
			break;
		// 0x0E LD C, n
		case 0x0E:
			opcodeLD(state.registers.c, state.memory.read(state.registers.pc++));
			break;
		// 0x12 LD (DE), A
		case 0x12:
			opcodeLDmem(state.memory, state.registers.de, state.registers.a);
			break;
		// 0x16 LD D, n
		case 0x16:
			opcodeLD(state.registers.d, state.memory.read(state.registers.pc++));
			break;
		// 0x1A LD A, (DE)
		case 0x1A:
			opcodeLD(state.registers.a, state.memory.read(state.registers.de));
			break;
		// 0x1E LD E, n
		case 0x1E:
			opcodeLD(state.registers.e, state.memory.read(state.registers.pc++));
			break;
		// 0x22 LD (HL+), A
		case 0x22:
			opcodeLDmem(state.memory, state.registers.hl++, state.registers.a);
			break;
		// 0x26 LD H, n
		case 0x26:
			opcodeLD(state.registers.h, state.memory.read(state.registers.pc++));
			break;
		// 0x2A LD A, (HL+)
		case 0x2A:
			opcodeLD(state.registers.a, state.memory.read(state.registers.hl++));
			break;
		// 0x2E LD L, n
		case 0x2E:
			opcodeLD(state.registers.l, state.memory.read(state.registers.pc++));
			break;
		// 0x32 LD (HL-), A
		case 0x32:
			opcodeLDmem(state.memory, state.registers.hl--, state.registers.a);
			break;
		// 0x36 LD (HL), n
		case 0x36:
			opcodeLDmem(state.memory, state.registers.hl, state.memory.read(state.registers.pc++));
			break;
		// 0x3A LD A, (HL-)
		case 0x3A:
			opcodeLD(state.registers.a, state.memory.read(state.registers.hl--));
			break;
		// 0x3E LD A, n
		case 0x3E:
			opcodeLD(state.registers.a, state.memory.read(state.registers.pc++));
			break;
		// 0x40 LD B, B
		case 0x40:
			opcodeLD(state.registers.b, state.registers.b);
			break;
		// 0x41 LD B, C
		case 0x41:
			opcodeLD(state.registers.b, state.registers.c);
			break;
		// 0x42 LD B, D
		case 0x42:
			opcodeLD(state.registers.b, state.registers.d);
			break;
		// 0x43 LD B, E
		case 0x43:
			opcodeLD(state.registers.b, state.registers.e);
			break;
		// 0x44 LD B, H
		case 0x44:
			opcodeLD(state.registers.b, state.registers.h);
			break;
		// 0x45 LD B, L
		case 0x45:
			opcodeLD(state.registers.b, state.registers.l);
			break;
		// 0x46 LD B, (HL)
		case 0x46:
			opcodeLD(state.registers.b, state.memory.read(state.registers.hl));
			break;
		// 0x47 LD B, A
		case 0x47:
			opcodeLD(state.registers.b, state.registers.a);
			break;
		// 0x48 LD C, B
		case 0x48:
			opcodeLD(state.registers.c, state.registers.b);
			break;
		// 0x49 LD C, C
		case 0x49:
			opcodeLD(state.registers.c, state.registers.c);
			break;
		// 0x4A LD C, D
		case 0x4A:
			opcodeLD(state.registers.c, state.registers.d);
			break;
		// 0x4B LD C, E
		case 0x4B:
			opcodeLD(state.registers.c, state.registers.e);
			break;
		// 0x4C LD C, H
		case 0x4C:
			opcodeLD(state.registers.c, state.registers.h);
			break;
		// 0x4D LD C, L
		case 0x4D:
			opcodeLD(state.registers.c, state.registers.l);
			break;
		// 0x4E LD C, (HL)
		case 0x4E:
			opcodeLD(state.registers.c, state.memory.read(state.registers.hl));
			break;
		// 0x4F LD C, A
		case 0x4F:
			opcodeLD(state.registers.c, state.registers.a);
			break;
		// 0x50 LD D, B
		case 0x50:
			opcodeLD(state.registers.d, state.registers.b);
			break;
		// 0x51 LD D, C
		case 0x51:
			opcodeLD(state.registers.d, state.registers.c);
			break;
		// 0x52 LD D, D
		case 0x52:
			opcodeLD(state.registers.d, state.registers.d);
			break;
		// 0x53 LD D, E
		case 0x53:
			opcodeLD(state.registers.d, state.registers.e);
			break;
		// 0x54 LD D, H
		case 0x54:
			opcodeLD(state.registers.d, state.registers.h);
			break;
		// 0x55 LD D, L
		case 0x55:
			opcodeLD(state.registers.d, state.registers.l);
			break;
		// 0x56 LD D, (HL)
		case 0x56:
			opcodeLD(state.registers.d, state.memory.read(state.registers.hl));
			break;
		// 0x57 LD D, A
		case 0x57:
			opcodeLD(state.registers.d, state.registers.a);
			break;
		// 0x58 LD E, B
		case 0x58:
			opcodeLD(state.registers.e, state.registers.b);
			break;
		// 0x59 LD E, C
		case 0x59:
			opcodeLD(state.registers.e, state.registers.c);
			break;
		// 0x5A LD E, D
		case 0x5A:
			opcodeLD(state.registers.e, state.registers.d);
			break;
		// 0x5B LD E, E
		case 0x5B:
			opcodeLD(state.registers.e, state.registers.e);
			break;
		// 0x5C LD E, H
		case 0x5C:
			opcodeLD(state.registers.e, state.registers.h);
			break;
		// 0x5D LD E, L
		case 0x5D:
			opcodeLD(state.registers.e, state.registers.l);
			break;
		// 0x5E LD E, (HL)
		case 0x5E:
			opcodeLD(state.registers.e, state.memory.read(state.registers.hl));
			break;
		// 0x5F LD E, A
		case 0x5F:
			opcodeLD(state.registers.e, state.registers.a);
			break;
		// 0x60 LD H, B
		case 0x60:
			opcodeLD(state.registers.h, state.registers.b);
			break;
		// 0x61 LD H, C
		case 0x61:
			opcodeLD(state.registers.h, state.registers.c);
			break;
		// 0x62 LD H, D
		case 0x62:
			opcodeLD(state.registers.h, state.registers.d);
			break;
		// 0x63 LD H, E
		case 0x63:
			opcodeLD(state.registers.h, state.registers.e);
			break;
		// 0x64 LD H, H
		case 0x64:
			opcodeLD(state.registers.h, state.registers.h);
			break;
		// 0x65 LD H, L
		case 0x65:
			opcodeLD(state.registers.h, state.registers.l);
			break;
		// 0x66 LD H, (HL)
		case 0x66:
			opcodeLD(state.registers.h, state.memory.read(state.registers.hl));
			break;
		// 0x67 LD H, A
		case 0x67:
			opcodeLD(state.registers.h, state.registers.a);
			break;
		// 0x68 LD L, B
		case 0x68:
			opcodeLD(state.registers.l, state.registers.b);
			break;
		// 0x69 LD L, C
		case 0x69:
			opcodeLD(state.registers.l, state.registers.c);
			break;
		// 0x6A LD L, D
		case 0x6A:
			opcodeLD(state.registers.l, state.registers.d);
			break;
		// 0x6B LD L, E
		case 0x6B:
			opcodeLD(state.registers.l, state.registers.e);
			break;
		// 0x6C LD L, H
		case 0x6C:
			opcodeLD(state.registers.l, state.registers.h);
			break;
		// 0x6D LD L, L
		case 0x6D:
			opcodeLD(state.registers.l, state.registers.l);
			break;
		// 0x6E LD L, (HL)
		case 0x6E:
			opcodeLD(state.registers.l, state.memory.read(state.registers.hl));
			break;
		// 0x6F LD L, A
		case 0x6F:
			opcodeLD(state.registers.l, state.registers.a);
			break;
		// 0x70 LD (HL), B
		case 0x70:
			opcodeLDmem(state.memory, state.registers.hl, state.registers.b);
			break;
		// 0x71 LD (HL), C
		case 0x71:
			opcodeLDmem(state.memory, state.registers.hl, state.registers.c);
			break;
		// 0x72 LD (HL), D
		case 0x72:
			opcodeLDmem(state.memory, state.registers.hl, state.registers.d);
			break;
		// 0x73 LD (HL), E
		case 0x73:
			opcodeLDmem(state.memory, state.registers.hl, state.registers.e);
			break;
		// 0x74 LD (HL), H
		case 0x74:
			opcodeLDmem(state.memory, state.registers.hl, state.registers.h);
			break;
		// 0x75 LD (HL), L
		case 0x75:
			opcodeLDmem(state.memory, state.registers.hl, state.registers.l);
			break;
		// 0x77 LD (HL), A
		case 0x77:
			opcodeLDmem(state.memory, state.registers.hl, state.registers.a);
			break;
		// 0x78 LD A, B
		case 0x78:
			opcodeLD(state.registers.a, state.registers.b);
			break;
		// 0x79 LD A, C
		case 0x79:
			opcodeLD(state.registers.a, state.registers.c);
			break;
		// 0x7A LD A, D
		case 0x7A:
			opcodeLD(state.registers.a, state.registers.d);
			break;
		// 0x7B LD A, E
		case 0x7B:
			opcodeLD(state.registers.a, state.registers.e);
			break;
		// 0x7C LD A, H
		case 0x7C:
			opcodeLD(state.registers.a, state.registers.h);
			break;
		// 0x7D LD A, L
		case 0x7D:
			opcodeLD(state.registers.a, state.registers.l);
			break;
		// 0x7E LD A, (HL)
		case 0x7E:
			opcodeLD(state.registers.a, state.memory.read(state.registers.hl));
			break;
		// 0x7F LD A, A
		case 0x7F:
			opcodeLD(state.registers.a, state.registers.a);
			break;
		// 0xE0 LDH (n), A
		case 0xE0:
			opcodeLDmem(state.memory, 0xFF00 | state.memory.read(state.registers.pc++), state.registers.a);
			break;
		// 0xE2 LDH (C), A
		case 0xE2:
			opcodeLDmem(state.memory, 0xFF00 | state.registers.c, state.registers.a);
			break;
		// 0xEA LD (nn), A
		case 0xEA:
			opcodeLDmem(state.memory, state.memory.readWord(state.registers.pc), state.registers.a);
			state.registers.pc += 2;
			break;
		// 0xF0 LDH A, (n)
		case 0xF0:
			opcodeLD(state.registers.a, state.memory.read(0xFF00 | state.memory.read(state.registers.pc++)));
			break;
		// 0xF2 LDH A, (C)
		case 0xF2:
			opcodeLD(state.registers.a, state.memory.read(0xFF00 | state.registers.c));
			break;
		// 0xFA LD A, (nn)
		case 0xFA:
			opcodeLD(state.registers.a, state.memory.read(state.memory.readWord(state.registers.pc)));
			state.registers.pc += 2;
			break;
	// 16-bit loads
		// 0x01 LD BC, nn
		case 0x01:
			opcodeLD16(state, state.registers.bc, state.memory.readWord(state.registers.pc));
			break;
		// 0x08 LD (nn), SP
		case 0x08:
			opcodeLD16mem(state, state.memory.readWord(state.registers.pc), state.registers.sp);
			break;
		// 0x11 LD DE, nn
		case 0x11:
			opcodeLD16(state, state.registers.de, state.memory.readWord(state.registers.pc));
			break;
		// 0x21 LD HL, nn
		case 0x21:
			opcodeLD16(state, state.registers.hl, state.memory.readWord(state.registers.pc));
			break;
		// 0x31 LD SP, nn
		case 0x31:
			opcodeLD16(state, state.registers.sp, state.memory.readWord(state.registers.pc));
			break;
		// 0xC1 POP BC
		case 0xC1:
			opcodePOP(state, state.registers.bc);
			break;
		// 0xD1 POP DE
		case 0xD1:
			opcodePOP(state, state.registers.de);
			break;
		// 0xE1 POP HL
		case 0xE1:
			opcodePOP(state, state.registers.hl);
			break;
		// 0xF1 POP AF
		case 0xF1:
			opcodePOP(state, state.registers.af);
			break;
		// 0xC5 PUSH BC
		case 0xC5:
			opcodePUSH(state, state.registers.bc);
			break;
		// 0xD5 PUSH DE
		case 0xD5:
			opcodePUSH(state, state.registers.de);
			break;
		// 0xE5 PUSH HL
		case 0xE5:
			opcodePUSH(state, state.registers.hl);
			break;
		// 0xF5 PUSH AF
		case 0xF5:
			opcodePUSH(state, state.registers.af);
			break;
		// 0xF8 LD HL, SP+e
		case 0xF8:
			opcodeLD16spe(state);
			break;
		// 0xF9 LD SP, HL
		case 0xF9:
			opcodeLD16sphl(state);
			break;
	// 8-bit arithmetic
		// 0x04 INC B
		case 0x04:
			opcodeINC(state, state.registers.b);
			break;
		// 0x14 INC D
		case 0x14:
			opcodeINC(state, state.registers.d);
			break;
		// 0x24 INC H
		case 0x24:
			opcodeINC(state, state.registers.h);
			break;
		// 0x34 INC (HL)
		case 0x34:
			opcodeINChl(state);
			break;
		// 0x0C INC C
		case 0x0C:
			opcodeINC(state, state.registers.c);
			break;
		// 0x1C INC E
		case 0x1C:
			opcodeINC(state, state.registers.e);
			break;
		// 0x2C INC L
		case 0x2C:
			opcodeINC(state, state.registers.l);
			break;
		// 0x3C INC A
		case 0x3C:
			opcodeINC(state, state.registers.a);
			break;
		// 0x05 DEC B
		case 0x05:
			opcodeDEC(state, state.registers.b);
			break;
		// 0x15 DEC D
		case 0x15:
			opcodeDEC(state, state.registers.d);
			break;
		// 0x25 DEC H
		case 0x25:
			opcodeDEC(state, state.registers.h);
			break;
		// 0x35 DEC (HL)
		case 0x35:
			opcodeDEChl(state);
			break;
		// 0x0D DEC C
		case 0x0D:
			opcodeDEC(state, state.registers.c);
			break;
		// 0x1D DEC E
		case 0x1D:
			opcodeDEC(state, state.registers.e);
			break;
		// 0x2D DEC L
		case 0x2D:
			opcodeDEC(state, state.registers.l);
			break;
		// 0x3D DEC A
		case 0x3D:
			opcodeDEC(state, state.registers.a);
			break;
		// 0x80 ADD B
		case 0x80:
			opcodeADD(state, state.registers.b);
			break;
		// 0x81 ADD C
		case 0x81:
			opcodeADD(state, state.registers.c);
			break;
		// 0x82 ADD D
		case 0x82:
			opcodeADD(state, state.registers.d);
			break;
		// 0x83 ADD E
		case 0x83:
			opcodeADD(state, state.registers.e);
			break;
		// 0x84 ADD H
		case 0x84:
			opcodeADD(state, state.registers.h);
			break;
		// 0x85 ADD L
		case 0x85:
			opcodeADD(state, state.registers.l);
			break;
		// 0x86 ADD (HL)
		case 0x86:
			opcodeADD(state, state.memory.read(state.registers.hl));
			break;
		// 0x87 ADD A
		case 0x87:
			opcodeADD(state, state.registers.a);
			break;
		// 0xC6 ADD n
		case 0xC6:
			opcodeADD(state, state.memory.read(state.registers.pc++));
			break;
		// 0x88 ADC B
		case 0x88:
			opcodeADC(state, state.registers.b);
			break;
		// 0x89 ADC C
		case 0x89:
			opcodeADC(state, state.registers.c);
			break;
		// 0x8A ADC D
		case 0x8A:
			opcodeADC(state, state.registers.d);
			break;
		// 0x8B ADC E
		case 0x8B:
			opcodeADC(state, state.registers.e);
			break;
		// 0x8C ADC H
		case 0x8C:
			opcodeADC(state, state.registers.h);
			break;
		// 0x8D ADC L
		case 0x8D:
			opcodeADC(state, state.registers.l);
			break;
		// 0x8E ADC (HL)
		case 0x8E:
			opcodeADC(state, state.memory.read(state.registers.hl));
			break;
		// 0x8F ADC A
		case 0x8F:
			opcodeADC(state, state.registers.a);
			break;
		// 0xCE ADC n
		case 0xCE:
			opcodeADC(state, state.memory.read(state.registers.pc++));
			break;
		// 0x90 SUB B
		case 0x90:
			opcodeSUB(state, state.registers.b);
			break;
		// 0x91 SUB C
		case 0x91:
			opcodeSUB(state, state.registers.c);
			break;
		// 0x92 SUB D
		case 0x92:
			opcodeSUB(state, state.registers.d);
			break;
		// 0x93 SUB E
		case 0x93:
			opcodeSUB(state, state.registers.e);
			break;
		// 0x94 SUB H
		case 0x94:
			opcodeSUB(state, state.registers.h);
			break;
		// 0x95 SUB L
		case 0x95:
			opcodeSUB(state, state.registers.l);
			break;
		// 0x96 SUB (HL)
		case 0x96:
			opcodeSUB(state, state.memory.read(state.registers.hl));
			break;
		// 0x97 SUB A
		case 0x97:
			opcodeSUB(state, state.registers.a);
			break;
		// 0xD6 SUB n
		case 0xD6:
			opcodeSUB(state, state.memory.read(state.registers.pc++));
			break;
		// 0x98 SBC B
		case 0x98:
			opcodeSBC(state, state.registers.b);
			break;
		// 0x99 SBC C
		case 0x99:
			opcodeSBC(state, state.registers.c);
			break;
		// 0x9A SBC D
		case 0x9A:
			opcodeSBC(state, state.registers.d);
			break;
		// 0x9B SBC E
		case 0x9B:
			opcodeSBC(state, state.registers.e);
			break;
		// 0x9C SBC H
		case 0x9C:
			opcodeSBC(state, state.registers.h);
			break;
		// 0x9D SBC L
		case 0x9D:
			opcodeSBC(state, state.registers.l);
			break;
		// 0x9E SBC (HL)
		case 0x9E:
			opcodeSBC(state, state.memory.read(state.registers.hl));
			break;
		// 0x9F SBC A
		case 0x9F:
			opcodeSBC(state, state.registers.a);
			break;
		// 0xDE SBC n
		case 0xDE:
			opcodeSBC(state, state.memory.read(state.registers.pc++));
			break;
		// 0xA0 AND B
		case 0xA0:
			opcodeAND(state, state.registers.b);
			break;
		// 0xA1 AND C
		case 0xA1:
			opcodeAND(state, state.registers.c);
			break;
		// 0xA2 AND D
		case 0xA2:
			opcodeAND(state, state.registers.d);
			break;
		// 0xA3 AND E
		case 0xA3:
			opcodeAND(state, state.registers.e);
			break;
		// 0xA4 AND H
		case 0xA4:
			opcodeAND(state, state.registers.h);
			break;
		// 0xA5 AND L
		case 0xA5:
			opcodeAND(state, state.registers.l);
			break;
		// 0xA6 AND (HL)
		case 0xA6:
			opcodeAND(state, state.memory.read(state.registers.hl));
			break;
		// 0xA7 AND A
		case 0xA7:
			opcodeAND(state, state.registers.a);
			break;
		// 0xE6 AND n
		case 0xE6:
			opcodeAND(state, state.memory.read(state.registers.pc++));
			break;
		// 0xA8 XOR B
		case 0xA8:
			opcodeXOR(state, state.registers.b);
			break;
		// 0xA9 XOR C
		case 0xA9:
			opcodeXOR(state, state.registers.c);
			break;
		// 0xAA XOR D
		case 0xAA:
			opcodeXOR(state, state.registers.d);
			break;
		// 0xAB XOR E
		case 0xAB:
			opcodeXOR(state, state.registers.e);
			break;
		// 0xAC XOR H
		case 0xAC:
			opcodeXOR(state, state.registers.h);
			break;
		// 0xAD XOR L
		case 0xAD:
			opcodeXOR(state, state.registers.l);
			break;
		// 0xAE XOR (HL)
		case 0xAE:
			opcodeXOR(state, state.memory.read(state.registers.hl));
			break;
		// 0xAF XOR A
		case 0xAF:
			opcodeXOR(state, state.registers.a);
			break;
		// 0xEE XOR n
		case 0xEE:
			opcodeXOR(state, state.memory.read(state.registers.pc++));
			break;
		// 0xB0 OR B
		case 0xB0:
			opcodeOR(state, state.registers.b);
			break;
		// 0xB1 OR C
		case 0xB1:
			opcodeOR(state, state.registers.c);
			break;
		// 0xB2 OR D
		case 0xB2:
			opcodeOR(state, state.registers.d);
			break;
		// 0xB3 OR E
		case 0xB3:
			opcodeOR(state, state.registers.e);
			break;
		// 0xB4 OR H
		case 0xB4:
			opcodeOR(state, state.registers.h);
			break;
		// 0xB5 OR L
		case 0xB5:
			opcodeOR(state, state.registers.l);
			break;
		// 0xB6 OR (HL)
		case 0xB6:
			opcodeOR(state, state.memory.read(state.registers.hl));
			break;
		// 0xB7 OR A
		case 0xB7:
			opcodeOR(state, state.registers.a);
			break;
		// 0xF6 OR n
		case 0xF6:
			opcodeOR(state, state.memory.read(state.registers.pc++));
			break;
		// 0xB8 CP B
		case 0xB8:
			opcodeCP(state, state.registers.b);
			break;
		// 0xB9 CP C
		case 0xB9:
			opcodeCP(state, state.registers.c);
			break;
		// 0xBA CP D
		case 0xBA:
			opcodeCP(state, state.registers.d);
			break;
		// 0xBB CP E
		case 0xBB:
			opcodeCP(state, state.registers.e);
			break;
		// 0xBC CP H
		case 0xBC:
			opcodeCP(state, state.registers.h);
			break;
		// 0xBD CP L
		case 0xBD:
			opcodeCP(state, state.registers.l);
			break;
		// 0xBE CP (HL)
		case 0xBE:
			opcodeCP(state, state.memory.read(state.registers.hl));
			break;
		// 0xBF CP A
		case 0xBF:
			opcodeCP(state, state.registers.a);
			break;
		// 0xBE CP n
		case 0xFE:
			opcodeCP(state, state.memory.read(state.registers.pc++));
			break;
		// 0x27 DAA
		case 0x27:
			opcodeDAA(state);
			break;
		// 0x37 SCF
		case 0x37:
			opcodeSCF(state);
			break;
		// 0x2F CPL
		case 0x2F:
			opcodeCPL(state);
			break;
		// 0x3F CCF
		case 0x3F:
			opcodeCCF(state);
			break;
	// Rotates, shifts, bit operations
		// 0x07 RLCA
		case 0x07:
			opcodeRLCA(state);
			break;
		// 0x17 RLA
		case 0x17:
			opcodeRLA(state);
			break;
		// 0x0F RRCA
		case 0x0F:
			opcodeRRCA(state);
			break;
		// 0x1F RRA
		case 0x1F:
			opcodeRRA(state);
			break;
		// 0xCB CB
		case 0xCB:
			decodeCB(state, state.memory.read(state.registers.pc++));
			break;
	// Control flow
		// 0x18 JR e
		case 0x18:
			opcodeJR(state, true);
			break;
		// 0x20 JR NZ, e
		case 0x20:
			opcodeJR(state, !state.registers.getZeroFlag());
			break;
		// 0x28 JR Z, e
		case 0x28:
			opcodeJR(state, state.registers.getZeroFlag());
			break;
		// 0x30 JR NC, e
		case 0x30:
			opcodeJR(state, !state.registers.getCarryFlag());
			break;
		// 0x38 JR C, e
		case 0x38:
			opcodeJR(state, state.registers.getCarryFlag());
			break;
		// 0xC2 JP NZ, nn
		case 0xC2:
			opcodeJP(state, !state.registers.getZeroFlag());
			break;
		// 0xC3 JP nn
		case 0xC3:
			opcodeJP(state, true);
			break;
		// 0xCA JP Z, nn
		case 0xCA:
			opcodeJP(state, state.registers.getZeroFlag());
			break;
		// 0xE9 JP HL
		case 0xE9:
			opcodeJPhl(state);
			break;
		// 0xD2 JP NC, nn
		case 0xD2:
			opcodeJP(state, !state.registers.getCarryFlag());
			break;
		// 0xDA JP C, nn
		case 0xDA:
			opcodeJP(state, state.registers.getCarryFlag());
			break;
		// 0xC4 CALL NZ, nn
		case 0xC4:
			opcodeCALL(state, !state.registers.getZeroFlag());
			break;
		// 0xCC CALL Z, nn
		case 0xCC:
			opcodeCALL(state, state.registers.getZeroFlag());
			break;
		// 0xCD CALL nn
		case 0xCD:
			opcodeCALL(state, true);
			break;
		// 0xD4 CALL NC, nn
		case 0xD4:
			opcodeCALL(state, !state.registers.getCarryFlag());
			break;
		// 0xDC CALL C, nn
		case 0xDC:
			opcodeCALL(state, state.registers.getCarryFlag());
			break;
		// 0xD0 RET NC
		case 0xD0:
			opcodeRET(state, !state.registers.getCarryFlag());
			break;
		// 0xC0 RET NZ
		case 0xC0:
			opcodeRET(state, !state.registers.getZeroFlag());
			break;
		// 0xC8 RET Z
		case 0xC8:
			opcodeRET(state, state.registers.getZeroFlag());
			break;
		// 0xD8 RET C
		case 0xD8:
			opcodeRET(state, state.registers.getCarryFlag());
			break;
		// 0xC9 RET
		case 0xC9:
			opcodeRET(state, true);
			break;
		// 0xD9 RETI
		case 0xD9:
			opcodeRETI(state);
			break;
		// 0xC7 RST 0x00
		case 0xC7:
			opcodeRST(state, 0x00);
			break;
		// 0xCF RST 0x08
		case 0xCF:
			opcodeRST(state, 0x08);
			break;
		// 0xD7 RST 0x10
		case 0xD7:
			opcodeRST(state, 0x10);
			break;
		// 0xDF RST 0x18
		case 0xDF:
			opcodeRST(state, 0x18);
			break;
		// 0xE7 RST 0x20
		case 0xE7:
			opcodeRST(state, 0x20);
			break;
		// 0xEF RST 0x28
		case 0xEF:
			opcodeRST(state, 0x28);
			break;
		// 0xF7 RST 0x30
		case 0xF7:
			opcodeRST(state, 0x30);
			break;
		// 0xFF RST 0x38
		case 0xFF:
			opcodeRST(state, 0x38);
			break;
		default:
			handleUndefinedOpcode(state);
			return;
	}
}

void CPU::decode8BitLoads(State& state, const Byte& opcode)
{

}

void CPU::decode16BitLoads(State& state, const Byte& opcode)
{

}

void CPU::decode8BitArithmetic(State& state, const Byte& opcode)
{

}

void CPU::decode16BitArithmetic(State& state, const Byte& opcode)
{

}

void CPU::decodeBitOperations(State& state, const Byte& opcode)
{

}

void CPU::decodeControlFlow(State& state, const Byte& opcode)
{

}

void CPU::decodeMisc(State& state, const Byte& opcode)
{

}


void CPU::decodeCB(State& state, const Byte& opcode)
{
	switch(opcode)
	{
		// 0x00 RLC B
		case 0x00:
			opcodeRLC(state.registers, state.registers.b);
			break;
		// 0x01 RLC C
		case 0x01:
			opcodeRLC(state.registers, state.registers.c);
			break;
		// 0x02 RLC D
		case 0x02:
			opcodeRLC(state.registers, state.registers.d);
			break;
		// 0x03 RLC E
		case 0x03:
			opcodeRLC(state.registers, state.registers.e);
			break;
		// 0x04 RLC H
		case 0x04:
			opcodeRLC(state.registers, state.registers.h);
			break;
		// 0x05 RLC L
		case 0x05:
			opcodeRLC(state.registers, state.registers.l);
			break;
		// 0x06 RLC (HL)
		case 0x06:
			opcodeRLChl(state);
			break;
		// 0x07 RLC A
		case 0x07:
			opcodeRLC(state.registers, state.registers.a);
			break;
		// 0x08 RRC B
		case 0x08:
			opcodeRRC(state.registers, state.registers.b);
			break;
		// 0x09 RRC C
		case 0x09:
			opcodeRRC(state.registers, state.registers.c);
			break;
		// 0x0A RRC D
		case 0x0A:
			opcodeRRC(state.registers, state.registers.d);
			break;
		// 0x0B RRC E
		case 0x0B:
			opcodeRRC(state.registers, state.registers.e);
			break;
		// 0x0C RRC H
		case 0x0C:
			opcodeRRC(state.registers, state.registers.h);
			break;
		// 0x0D RRC L
		case 0x0D:
			opcodeRRC(state.registers, state.registers.l);
			break;
		// 0x0E RRC (HL)
		case 0x0E:
			opcodeRRChl(state);
			break;
		// 0x0F RRC A
		case 0x0F:
			opcodeRRC(state.registers, state.registers.a);
			break;
		// 0x10 RL B
		case 0x10:
			opcodeRL(state.registers, state.registers.b);
			break;
		// 0x11 RL C
		case 0x11:
			opcodeRL(state.registers, state.registers.c);
			break;
		// 0x12 RL D
		case 0x12:
			opcodeRL(state.registers, state.registers.d);
			break;
		// 0x13 RL E
		case 0x13:
			opcodeRL(state.registers, state.registers.e);
			break;
		// 0x14 RL H
		case 0x14:
			opcodeRL(state.registers, state.registers.h);
			break;
		// 0x15 RL L
		case 0x15:
			opcodeRL(state.registers, state.registers.l);
			break;
		// 0x16 RL (HL)
		case 0x16:
			opcodeRLhl(state);
			break;
		// 0x17 RL A
		case 0x17:
			opcodeRL(state.registers, state.registers.a);
			break;
		// 0x18 RR B
		case 0x18:
			opcodeRR(state.registers, state.registers.b);
			break;
		// 0x19 RR C
		case 0x19:
			opcodeRR(state.registers, state.registers.c);
			break;
		// 0x1A RR D
		case 0x1A:
			opcodeRR(state.registers, state.registers.d);
			break;
		// 0x1B RR E
		case 0x1B:
			opcodeRR(state.registers, state.registers.e);
			break;
		// 0x1C RR H
		case 0x1C:
			opcodeRR(state.registers, state.registers.h);
			break;
		// 0x1D RR L
		case 0x1D:
			opcodeRR(state.registers, state.registers.l);
			break;
		// 0x1E RR (HL)
		case 0x1E:
			opcodeRRhl(state);
			break;
		// 0x1F RR A
		case 0x1F:
			opcodeRR(state.registers, state.registers.a);
			break;
		// 0x20 SLA B
		case 0x20:
			opcodeSLA(state.registers, state.registers.b);
			break;
		// 0x21 SLA C
		case 0x21:
			opcodeSLA(state.registers, state.registers.c);
			break;
		// 0x22 SLA D
		case 0x22:
			opcodeSLA(state.registers, state.registers.d);
			break;
		// 0x23 SLA E
		case 0x23:
			opcodeSLA(state.registers, state.registers.e);
			break;
		// 0x24 SLA H
		case 0x24:
			opcodeSLA(state.registers, state.registers.h);
			break;
		// 0x25 SLA L
		case 0x25:
			opcodeSLA(state.registers, state.registers.l);
			break;
		// 0x26 SLA (HL)
		case 0x26:
			opcodeSLAhl(state);
			break;
		// 0x27 SLA A
		case 0x27:
			opcodeSLA(state.registers, state.registers.a);
			break;
		// 0x28 SRA B
		case 0x28:
			opcodeSRA(state.registers, state.registers.b);
			break;
		// 0x29 SRA C
		case 0x29:
			opcodeSRA(state.registers, state.registers.c);
			break;
		// 0x2A SRA D
		case 0x2A:
			opcodeSRA(state.registers, state.registers.d);
			break;
		// 0x2B SRA E
		case 0x2B:
			opcodeSRA(state.registers, state.registers.e);
			break;
		// 0x2C SRA H
		case 0x2C:
			opcodeSRA(state.registers, state.registers.h);
			break;
		// 0x2D SRA L
		case 0x2D:
			opcodeSRA(state.registers, state.registers.l);
			break;
		// 0x2E SRA (HL)
		case 0x2E:
			opcodeSRAhl(state);
			break;
		// 0x2F SRA A
		case 0x2F:
			opcodeSRA(state.registers, state.registers.a);
			break;
		// 0x30 SWAP B
		case 0x30:
			opcodeSWAP(state.registers, state.registers.b);
			break;
		// 0x31 SWAP C
		case 0x31:
			opcodeSWAP(state.registers, state.registers.c);
			break;
		// 0x32 SWAP D
		case 0x32:
			opcodeSWAP(state.registers, state.registers.d);
			break;
		// 0x33 SWAP E
		case 0x33:
			opcodeSWAP(state.registers, state.registers.e);
			break;
		// 0x34 SWAP H
		case 0x34:
			opcodeSWAP(state.registers, state.registers.h);
			break;
		// 0x35 SWAP L
		case 0x35:
			opcodeSWAP(state.registers, state.registers.l);
			break;
		// 0x36 SWAP (HL)
		case 0x36:
			opcodeSWAPhl(state);
			break;
		// 0x37 SWAP A
		case 0x37:
			opcodeSWAP(state.registers, state.registers.a);
			break;
		// 0x38 SRL B
		case 0x38:
			opcodeSRL(state.registers, state.registers.b);
			break;
		// 0x39 SRL C
		case 0x39:
			opcodeSRL(state.registers, state.registers.c);
			break;
		// 0x3A SRL D
		case 0x3A:
			opcodeSRL(state.registers, state.registers.d);
			break;
		// 0x3B SRL E
		case 0x3B:
			opcodeSRL(state.registers, state.registers.e);
			break;
		// 0x3C SRL H
		case 0x3C:
			opcodeSRL(state.registers, state.registers.h);
			break;
		// 0x3D SRL L
		case 0x3D:
			opcodeSRL(state.registers, state.registers.l);
			break;
		// 0x3E SRL (HL)
		case 0x3E:
			opcodeSRLhl(state);
			break;
		// 0x3F SRL A
		case 0x3F:
			opcodeSRL(state.registers, state.registers.a);
			break;
		// 0x40 BIT 0, B
		case 0x40:
			opcodeBIT(state.registers, state.registers.b, 0);
			break;
		// 0x41 BIT 0, C
		case 0x41:
			opcodeBIT(state.registers, state.registers.c, 0);
			break;
		// 0x42 BIT 0, D
		case 0x42:
			opcodeBIT(state.registers, state.registers.d, 0);
			break;
		// 0x43 BIT 0, E
		case 0x43:
			opcodeBIT(state.registers, state.registers.e, 0);
			break;
		// 0x44 BIT 0, H
		case 0x44:
			opcodeBIT(state.registers, state.registers.h, 0);
			break;
		// 0x45 BIT 0, L
		case 0x45:
			opcodeBIT(state.registers, state.registers.l, 0);
			break;
		// 0x46 BIT 0, (HL)
		case 0x46:
			opcodeBIThl(state, 0);
			break;
		// 0x47 BIT 0, A
		case 0x47:
			opcodeBIT(state.registers, state.registers.a, 0);
			break;
		// 0x48 BIT 1, B
		case 0x48:
			opcodeBIT(state.registers, state.registers.b, 1);
			break;
		// 0x49 BIT 1, C
		case 0x49:
			opcodeBIT(state.registers, state.registers.c, 1);
			break;
		// 0x4A BIT 1, D
		case 0x4A:
			opcodeBIT(state.registers, state.registers.d, 1);
			break;
		// 0x4B BIT 1, E
		case 0x4B:
			opcodeBIT(state.registers, state.registers.e, 1);
			break;
		// 0x4C BIT 1, H
		case 0x4C:
			opcodeBIT(state.registers, state.registers.h, 1);
			break;
		// 0x4D BIT 1, L
		case 0x4D:
			opcodeBIT(state.registers, state.registers.l, 1);
			break;
		// 0x4E BIT 1, (HL)
		case 0x4E:
			opcodeBIThl(state, 1);
			break;
		// 0x4F BIT 1, A
		case 0x4F:
			opcodeBIT(state.registers, state.registers.a, 1);
			break;
		// 0x50 BIT 2, B
		case 0x50:
			opcodeBIT(state.registers, state.registers.b, 2);
			break;
		// 0x51 BIT 2, C
		case 0x51:
			opcodeBIT(state.registers, state.registers.c, 2);
			break;
		// 0x52 BIT 2, D
		case 0x52:
			opcodeBIT(state.registers, state.registers.d, 2);
			break;
		// 0x53 BIT 2, E
		case 0x53:
			opcodeBIT(state.registers, state.registers.e, 2);
			break;
		// 0x54 BIT 2, H
		case 0x54:
			opcodeBIT(state.registers, state.registers.h, 2);
			break;
		// 0x55 BIT 2, L
		case 0x55:
			opcodeBIT(state.registers, state.registers.l, 2);
			break;
		// 0x56 BIT 2, (HL)
		case 0x56:
			opcodeBIThl(state, 2);
			break;
		// 0x57 BIT 2, A
		case 0x57:
			opcodeBIT(state.registers, state.registers.a, 2);
			break;
		// 0x58 BIT 3, B
		case 0x58:
			opcodeBIT(state.registers, state.registers.b, 3);
			break;
		// 0x59 BIT 3, C
		case 0x59:
			opcodeBIT(state.registers, state.registers.c, 3);
			break;
		// 0x5A BIT 3, D
		case 0x5A:
			opcodeBIT(state.registers, state.registers.d, 3);
			break;
		// 0x5B BIT 3, E
		case 0x5B:
			opcodeBIT(state.registers, state.registers.e, 3);
			break;
		// 0x5C BIT 3, H
		case 0x5C:
			opcodeBIT(state.registers, state.registers.h, 3);
			break;
		// 0x5D BIT 3, L
		case 0x5D:
			opcodeBIT(state.registers, state.registers.l, 3);
			break;
		// 0x5E BIT 3, (HL)
		case 0x5E:
			opcodeBIThl(state, 3);
			break;
		// 0x5F BIT 3, A
		case 0x5F:
			opcodeBIT(state.registers, state.registers.a, 3);
			break;
		// 0x60 BIT 4, B
		case 0x60:
			opcodeBIT(state.registers, state.registers.b, 4);
			break;
		// 0x61 BIT 4, C
		case 0x61:
			opcodeBIT(state.registers, state.registers.c, 4);
			break;
		// 0x62 BIT 4, D
		case 0x62:
			opcodeBIT(state.registers, state.registers.d, 4);
			break;
		// 0x63 BIT 4, E
		case 0x63:
			opcodeBIT(state.registers, state.registers.e, 4);
			break;
		// 0x64 BIT 4, H
		case 0x64:
			opcodeBIT(state.registers, state.registers.h, 4);
			break;
		// 0x65 BIT 4, L
		case 0x65:
			opcodeBIT(state.registers, state.registers.l, 4);
			break;
		// 0x66 BIT 4, (HL)
		case 0x66:
			opcodeBIThl(state, 4);
			break;
		// 0x67 BIT 4, A
		case 0x67:
			opcodeBIT(state.registers, state.registers.a, 4);
			break;
		// 0x68 BIT 5, B
		case 0x68:
			opcodeBIT(state.registers, state.registers.b, 5);
			break;
		// 0x69 BIT 5, C
		case 0x69:
			opcodeBIT(state.registers, state.registers.c, 5);
			break;
		// 0x6A BIT 5, D
		case 0x6A:
			opcodeBIT(state.registers, state.registers.d, 5);
			break;
		// 0x6B BIT 5, E
		case 0x6B:
			opcodeBIT(state.registers, state.registers.e, 5);
			break;
		// 0x6C BIT 5, H
		case 0x6C:
			opcodeBIT(state.registers, state.registers.h, 5);
			break;
		// 0x6D BIT 5, L
		case 0x6D:
			opcodeBIT(state.registers, state.registers.l, 5);
			break;
		// 0x6E BIT 5, (HL)
		case 0x6E:
			opcodeBIThl(state, 5);
			break;
		// 0x6F BIT 5, A
		case 0x6F:
			opcodeBIT(state.registers, state.registers.a, 5);
			break;
		// 0x70 BIT 6, B
		case 0x70:
			opcodeBIT(state.registers, state.registers.b, 6);
			break;
		// 0x71 BIT 6, C
		case 0x71:
			opcodeBIT(state.registers, state.registers.c, 6);
			break;
		// 0x72 BIT 6, D
		case 0x72:
			opcodeBIT(state.registers, state.registers.d, 6);
			break;
		// 0x73 BIT 6, E
		case 0x73:
			opcodeBIT(state.registers, state.registers.e, 6);
			break;
		// 0x74 BIT 6, H
		case 0x74:
			opcodeBIT(state.registers, state.registers.h, 6);
			break;
		// 0x75 BIT 6, L
		case 0x75:
			opcodeBIT(state.registers, state.registers.l, 6);
			break;
		// 0x76 BIT 6, (HL)
		case 0x76:
			opcodeBIThl(state, 6);
			break;
		// 0x77 BIT 6, A
		case 0x77:
			opcodeBIT(state.registers, state.registers.a, 6);
			break;
		// 0x78 BIT 7, B
		case 0x78:
			opcodeBIT(state.registers, state.registers.b, 7);
			break;
		// 0x79 BIT 7, C
		case 0x79:
			opcodeBIT(state.registers, state.registers.c, 7);
			break;
		// 0x7A BIT 7, D
		case 0x7A:
			opcodeBIT(state.registers, state.registers.d, 7);
			break;
		// 0x7B BIT 7, E
		case 0x7B:
			opcodeBIT(state.registers, state.registers.e, 7);
			break;
		// 0x7C BIT 7, H
		case 0x7C:
			opcodeBIT(state.registers, state.registers.h, 7);
			break;
		// 0x7D BIT 7, L
		case 0x7D:
			opcodeBIT(state.registers, state.registers.l, 7);
			break;
		// 0x7E BIT 7, (HL)
		case 0x7E:
			opcodeBIThl(state, 7);
			break;
		// 0x7F BIT 7, A
		case 0x7F:
			opcodeBIT(state.registers, state.registers.a, 7);
			break;
		// 0x80 RES 0, B
		case 0x80:
			opcodeRES(state.registers.b, 0);
			break;
		// 0x81 RES 0, C
		case 0x81:
			opcodeRES(state.registers.c, 0);
			break;
		// 0x82 RES 0, D
		case 0x82:
			opcodeRES(state.registers.d, 0);
			break;
		// 0x83 RES 0, E
		case 0x83:
			opcodeRES(state.registers.e, 0);
			break;
		// 0x84 RES 0, H
		case 0x84:
			opcodeRES(state.registers.h, 0);
			break;
		// 0x85 RES 0, L
		case 0x85:
			opcodeRES(state.registers.l, 0);
			break;
		// 0x86 RES 0, (HL)
		case 0x86:
			opcodeREShl(state, 0);
			break;
		// 0x87 RES 0, A
		case 0x87:
			opcodeRES(state.registers.a, 0);
			break;
		// 0x88 RES 1, B
		case 0x88:
			opcodeRES(state.registers.b, 1);
			break;
		// 0x89 RES 1, C
		case 0x89:
			opcodeRES(state.registers.c, 1);
			break;
		// 0x8A RES 1, D
		case 0x8A:
			opcodeRES(state.registers.d, 1);
			break;
		// 0x8B RES 1, E
		case 0x8B:
			opcodeRES(state.registers.e, 1);
			break;
		// 0x8C RES 1, H
		case 0x8C:
			opcodeRES(state.registers.h, 1);
			break;
		// 0x8D RES 1, L
		case 0x8D:
			opcodeRES(state.registers.l, 1);
			break;
		// 0x8E RES 1, (HL)
		case 0x8E:
			opcodeREShl(state, 1);
			break;
		// 0x8F RES 1, A
		case 0x8F:
			opcodeRES(state.registers.a, 1);
			break;
		// 0x90 RES 2, B
		case 0x90:
			opcodeRES(state.registers.b, 2);
			break;
		// 0x91 RES 2, C
		case 0x91:
			opcodeRES(state.registers.c, 2);
			break;
		// 0x92 RES 2, D
		case 0x92:
			opcodeRES(state.registers.d, 2);
			break;
		// 0x93 RES 2, E
		case 0x93:
			opcodeRES(state.registers.e, 2);
			break;
		// 0x94 RES 2, H
		case 0x94:
			opcodeRES(state.registers.h, 2);
			break;
		// 0x95 RES 2, L
		case 0x95:
			opcodeRES(state.registers.l, 2);
			break;
		// 0x96 RES 2, (HL)
		case 0x96:
			opcodeREShl(state, 2);
			break;
		// 0x97 RES 2, A
		case 0x97:
			opcodeRES(state.registers.a, 2);
			break;
		// 0x98 RES 3, B
		case 0x98:
			opcodeRES(state.registers.b, 3);
			break;
		// 0x99 RES 3, C
		case 0x99:
			opcodeRES(state.registers.c, 3);
			break;
		// 0x9A RES 3, D
		case 0x9A:
			opcodeRES(state.registers.d, 3);
			break;
		// 0x9B RES 3, E
		case 0x9B:
			opcodeRES(state.registers.e, 3);
			break;
		// 0x9C RES 3, H
		case 0x9C:
			opcodeRES(state.registers.h, 3);
			break;
		// 0x9D RES 3, L
		case 0x9D:
			opcodeRES(state.registers.l, 3);
			break;
		// 0x9E RES 3, (HL)
		case 0x9E:
			opcodeREShl(state, 3);
			break;
		// 0x9F RES 3, A
		case 0x9F:
			opcodeRES(state.registers.a, 3);
			break;
		// 0xA0 RES 4, B
		case 0xA0:
			opcodeRES(state.registers.b, 4);
			break;
		// 0xA1 RES 4, C
		case 0xA1:
			opcodeRES(state.registers.c, 4);
			break;
		// 0xA2 RES 4, D
		case 0xA2:
			opcodeRES(state.registers.d, 4);
			break;
		// 0xA3 RES 4, E
		case 0xA3:
			opcodeRES(state.registers.e, 4);
			break;
		// 0xA4 RES 4, H
		case 0xA4:
			opcodeRES(state.registers.h, 4);
			break;
		// 0xA5 RES 4, L
		case 0xA5:
			opcodeRES(state.registers.l, 4);
			break;
		// 0xA6 RES 4, (HL)
		case 0xA6:
			opcodeREShl(state, 4);
			break;
		// 0xA7 RES 4, A
		case 0xA7:
			opcodeRES(state.registers.a, 4);
			break;
		// 0xA8 RES 5, B
		case 0xA8:
			opcodeRES(state.registers.b, 5);
			break;
		// 0xA9 RES 5, C
		case 0xA9:
			opcodeRES(state.registers.c, 5);
			break;
		// 0xAA RES 5, D
		case 0xAA:
			opcodeRES(state.registers.d, 5);
			break;
		// 0xAB RES 5, E
		case 0xAB:
			opcodeRES(state.registers.e, 5);
			break;
		// 0xAC RES 5, H
		case 0xAC:
			opcodeRES(state.registers.h, 5);
			break;
		// 0xAD RES 5, L
		case 0xAD:
			opcodeRES(state.registers.l, 5);
			break;
		// 0xAE RES 5, (HL)
		case 0xAE:
			opcodeREShl(state, 5);
			break;
		// 0xAF RES 5, A
		case 0xAF:
			opcodeRES(state.registers.a, 5);
			break;
		// 0xB0 RES 6, B
		case 0xB0:
			opcodeRES(state.registers.b, 6);
			break;
		// 0xB1 RES 6, C
		case 0xB1:
			opcodeRES(state.registers.c, 6);
			break;
		// 0xB2 RES 6, D
		case 0xB2:
			opcodeRES(state.registers.d, 6);
			break;
		// 0xB3 RES 6, E
		case 0xB3:
			opcodeRES(state.registers.e, 6);
			break;
		// 0xB4 RES 6, H
		case 0xB4:
			opcodeRES(state.registers.h, 6);
			break;
		// 0xB5 RES 6, L
		case 0xB5:
			opcodeRES(state.registers.l, 6);
			break;
		// 0xB6 RES 6, (HL)
		case 0xB6:
			opcodeREShl(state, 6);
			break;
		// 0xB7 RES 6, A
		case 0xB7:
			opcodeRES(state.registers.a, 6);
			break;
		// 0xB8 RES 7, B
		case 0xB8:
			opcodeRES(state.registers.b, 7);
			break;
		// 0xB9 RES 7, C
		case 0xB9:
			opcodeRES(state.registers.c, 7);
			break;
		// 0xBA RES 7, D
		case 0xBA:
			opcodeRES(state.registers.d, 7);
			break;
		// 0xBB RES 7, E
		case 0xBB:
			opcodeRES(state.registers.e, 7);
			break;
		// 0xBC RES 7, H
		case 0xBC:
			opcodeRES(state.registers.h, 7);
			break;
		// 0xBD RES 7, L
		case 0xBD:
			opcodeRES(state.registers.l, 7);
			break;
		// 0xBE RES 7, (HL)
		case 0xBE:
			opcodeREShl(state, 7);
			break;
		// 0xBF RES 7, A
		case 0xBF:
			opcodeRES(state.registers.a, 7);
			break;
		// 0xC0 SET 0, B
		case 0xC0:
			opcodeSET(state.registers.b, 0);
			break;
		// 0xC1 SET 0, C
		case 0xC1:
			opcodeSET(state.registers.c, 0);
			break;
		// 0xC2 SET 0, D
		case 0xC2:
			opcodeSET(state.registers.d, 0);
			break;
		// 0xC3 SET 0, E
		case 0xC3:
			opcodeSET(state.registers.e, 0);
			break;
		// 0xC4 SET 0, H
		case 0xC4:
			opcodeSET(state.registers.h, 0);
			break;
		// 0xC5 SET 0, L
		case 0xC5:
			opcodeSET(state.registers.l, 0);
			break;
		// 0xC6 SET 0, (HL)
		case 0xC6:
			opcodeSEThl(state, 0);
			break;
		// 0xC7 SET 0, A
		case 0xC7:
			opcodeSET(state.registers.a, 0);
			break;
		// 0xC8 SET 1, B
		case 0xC8:
			opcodeSET(state.registers.b, 1);
			break;
		// 0xC9 SET 1, C
		case 0xC9:
			opcodeSET(state.registers.c, 1);
			break;
		// 0xCA SET 1, D
		case 0xCA:
			opcodeSET(state.registers.d, 1);
			break;
		// 0xCB SET 1, E
		case 0xCB:
			opcodeSET(state.registers.e, 1);
			break;
		// 0xCC SET 1, H
		case 0xCC:
			opcodeSET(state.registers.h, 1);
			break;
		// 0xCD SET 1, L
		case 0xCD:
			opcodeSET(state.registers.l, 1);
			break;
		// 0xCE SET 1, (HL)
		case 0xCE:
			opcodeSEThl(state, 1);
			break;
		// 0xCF SET 1, A
		case 0xCF:
			opcodeSET(state.registers.a, 1);
			break;
		// 0xD0 SET 2, B
		case 0xD0:
			opcodeSET(state.registers.b, 2);
			break;
		// 0xD1 SET 2, C
		case 0xD1:
			opcodeSET(state.registers.c, 2);
			break;
		// 0xD2 SET 2, D
		case 0xD2:
			opcodeSET(state.registers.d, 2);
			break;
		// 0xD3 SET 2, E
		case 0xD3:
			opcodeSET(state.registers.e, 2);
			break;
		// 0xD4 SET 2, H
		case 0xD4:
			opcodeSET(state.registers.h, 2);
			break;
		// 0xD5 SET 2, L
		case 0xD5:
			opcodeSET(state.registers.l, 2);
			break;
		// 0xD6 SET 2, (HL)
		case 0xD6:
			opcodeSEThl(state, 2);
			break;
		// 0xD7 SET 2, A
		case 0xD7:
			opcodeSET(state.registers.a, 2);
			break;
		// 0xD8 SET 3, B
		case 0xD8:
			opcodeSET(state.registers.b, 3);
			break;
		// 0xD9 SET 3, C
		case 0xD9:
			opcodeSET(state.registers.c, 3);
			break;
		// 0xDA SET 3, D
		case 0xDA:
			opcodeSET(state.registers.d, 3);
			break;
		// 0xDB SET 3, E
		case 0xDB:
			opcodeSET(state.registers.e, 3);
			break;
		// 0xDC SET 3, H
		case 0xDC:
			opcodeSET(state.registers.h, 3);
			break;
		// 0xDD SET 3, L
		case 0xDD:
			opcodeSET(state.registers.l, 3);
			break;
		// 0xDE SET 3, (HL)
		case 0xDE:
			opcodeSEThl(state, 3);
			break;
		// 0xDF SET 3, A
		case 0xDF:
			opcodeSET(state.registers.a, 3);
			break;
		// 0xE0 SET 4, B
		case 0xE0:
			opcodeSET(state.registers.b, 4);
			break;
		// 0xE1 SET 4, C
		case 0xE1:
			opcodeSET(state.registers.c, 4);
			break;
		// 0xE2 SET 4, D
		case 0xE2:
			opcodeSET(state.registers.d, 4);
			break;
		// 0xE3 SET 4, E
		case 0xE3:
			opcodeSET(state.registers.e, 4);
			break;
		// 0xE4 SET 4, H
		case 0xE4:
			opcodeSET(state.registers.h, 4);
			break;
		// 0xE5 SET 4, L
		case 0xE5:
			opcodeSET(state.registers.l, 4);
			break;
		// 0xE6 SET 4, (HL)
		case 0xE6:
			opcodeSEThl(state, 4);
			break;
		// 0xE7 SET 4, A
		case 0xE7:
			opcodeSET(state.registers.a, 4);
			break;
		// 0xE8 SET 5, B
		case 0xE8:
			opcodeSET(state.registers.b, 5);
			break;
		// 0xE9 SET 5, C
		case 0xE9:
			opcodeSET(state.registers.c, 5);
			break;
		// 0xEA SET 5, D
		case 0xEA:
			opcodeSET(state.registers.d, 5);
			break;
		// 0xEB SET 5, E
		case 0xEB:
			opcodeSET(state.registers.e, 5);
			break;
		// 0xEC SET 5, H
		case 0xEC:
			opcodeSET(state.registers.h, 5);
			break;
		// 0xED SET 5, L
		case 0xED:
			opcodeSET(state.registers.l, 5);
			break;
		// 0xEE SET 5, (HL)
		case 0xEE:
			opcodeSEThl(state, 5);
			break;
		// 0xEF SET 5, A
		case 0xEF:
			opcodeSET(state.registers.a, 5);
			break;
		// 0xF0 SET 6, B
		case 0xF0:
			opcodeSET(state.registers.b, 6);
			break;
		// 0xF1 SET 6, C
		case 0xF1:
			opcodeSET(state.registers.c, 6);
			break;
		// 0xF2 SET 6, D
		case 0xF2:
			opcodeSET(state.registers.d, 6);
			break;
		// 0xF3 SET 6, E
		case 0xF3:
			opcodeSET(state.registers.e, 6);
			break;
		// 0xF4 SET 6, H
		case 0xF4:
			opcodeSET(state.registers.h, 6);
			break;
		// 0xF5 SET 6, L
		case 0xF5:
			opcodeSET(state.registers.l, 6);
			break;
		// 0xF6 SET 6, (HL)
		case 0xF6:
			opcodeSEThl(state, 6);
			break;
		// 0xF7 SET 6, A
		case 0xF7:
			opcodeSET(state.registers.a, 6);
			break;
		// 0xF8 SET 7, B
		case 0xF8:
			opcodeSET(state.registers.b, 7);
			break;
		// 0xF9 SET 7, C
		case 0xF9:
			opcodeSET(state.registers.c, 7);
			break;
		// 0xFA SET 7, D
		case 0xFA:
			opcodeSET(state.registers.d, 7);
			break;
		// 0xFB SET 7, E
		case 0xFB:
			opcodeSET(state.registers.e, 7);
			break;
		// 0xFC SET 7, H
		case 0xFC:
			opcodeSET(state.registers.h, 7);
			break;
		// 0xFD SET 7, L
		case 0xFD:
			opcodeSET(state.registers.l, 7);
			break;
		// 0xFE SET 7, (HL)
		case 0xFE:
			opcodeSEThl(state, 7);
			break;
		// 0xFF SET 7, A
		case 0xFF:
			opcodeSET(state.registers.a, 7);
			break;
		default:
			handleUndefinedOpcode(state);
			break;
	}
}