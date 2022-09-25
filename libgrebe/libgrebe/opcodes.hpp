#ifndef LIBGREBE_OPCODES_HPP
#define LIBGREBE_OPCODES_HPP

#define LIBGREBE_OP_NOP			0x00
#define LIBGREBE_OP_LD_BC_d16		0x01
#define LIBGREBE_OP_LD_MEM_AT_BC_A	0x02
#define LIBGREBE_OP_INC_BC		0x03
#define LIBGREBE_OP_INC_B		0x04
#define LIBGREBE_OP_DEC_B		0x05
#define LIBGREBE_OP_LD_B_d8		0x06
#define LIBGREBE_OP_RLCA		0x07
#define LIBGREBE_OP_LD_MEM_AT_a16_SP	0x08
#define LIBGREBE_OP_ADD_HL_BC		0x09
#define LIBGREBE_OP_LD_A_MEM_AT_BC	0x0A
#define LIBGREBE_OP_DEC_BC		0x0B
#define LIBGREBE_OP_INC_C		0x0C
#define LIBGREBE_OP_DEC_C		0x0D
#define LIBGREBE_OP_LD_C_d8		0x0E
#define LIBGREBE_OP_RRCA		0x0F
#define LIBGREBE_OP_STOP_0		0x10
#define LIBGREBE_OP_LD_DE_d16		0x11
#define LIBGREBE_OP_LD_MEM_AT_DE_A	0x12
#define LIBGREBE_OP_INC_DE		0x13
#define LIBGREBE_OP_INC_D		0x14
#define LIBGREBE_OP_DEC_D		0x15
#define LIBGREBE_OP_LD_D_d8		0x16
#define LIBGREBE_OP_RLA			0x17
#define LIBGREBE_OP_JR_r8		0x18
#define LIBGREBE_OP_ADD_HL_DE		0x19
#define LIBGREBE_OP_LD_A_MEM_AT_DE	0x1A
#define LIBGREBE_OP_DEC_DE		0x1B
#define LIBGREBE_OP_INC_E		0x1C
#define LIBGREBE_OP_DEC_E		0x1D
#define LIBGREBE_OP_LD_E_d8		0x1E
#define LIBGREBE_OP_RRA			0x1F
#define LIBGREBE_OP_JR_NZ_r8		0x20
#define LIBGREBE_OP_LD_HL_d16		0x21
#define LIBGREBE_OP_LDI_MEM_AT_HL_A	0x22
#define LIBGREBE_OP_INC_HL		0x23
#define LIBGREBE_OP_INC_H		0x24
#define LIBGREBE_OP_DEC_H		0x25
#define LIBGREBE_OP_LD_H_d8		0x26
#define LIBGREBE_OP_DAA			0x27
#define LIBGREBE_OP_JR_Z_r8		0x28
#define LIBGREBE_OP_ADD_HL_HL		0x29
#define LIBGREBE_OP_LDI_A_MEM_AT_HL	0x2A
#define LIBGREBE_OP_DEC_HL		0x2B
#define LIBGREBE_OP_INC_L		0x2C
#define LIBGREBE_OP_DEC_L		0x2D
#define LIBGREBE_OP_LD_L_d8		0x2E
#define LIBGREBE_OP_CPL			0x2F
#define LIBGREBE_OP_JR_NC_r8		0x30
#define LIBGREBE_OP_LD_SP_d16		0x31
#define LIBGREBE_OP_LDD_MEM_AT_HL_A	0x32
#define LIBGREBE_OP_INC_SP		0x33
#define LIBGREBE_OP_INC_MEM_AT_HL	0x34
#define LIBGREBE_OP_DEC_MEM_AT_HL	0x35
#define LIBGREBE_OP_LD_MEM_AT_HL_d8	0x36
#define LIBGREBE_OP_SCF			0x37
#define LIBGREBE_OP_JR_C_r8		0x38
#define LIBGREBE_OP_ADD_HL_SP		0x39
#define LIBGREBE_OP_LDD_A_MEM_AT_HL	0x3A
#define LIBGREBE_OP_DEC_SP		0x3B
#define LIBGREBE_OP_INC_A		0x3C
#define LIBGREBE_OP_DEC_A		0x3D
#define LIBGREBE_OP_LD_A_d8		0x3E
#define LIBGREBE_OP_CCF			0x3F
#define LIBGREBE_OP_LD_B_B		0x40
#define LIBGREBE_OP_LD_B_C		0x41
#define LIBGREBE_OP_LD_B_D		0x42
#define LIBGREBE_OP_LD_B_E		0x43
#define LIBGREBE_OP_LD_B_H		0x44
#define LIBGREBE_OP_LD_B_L		0x45
#define LIBGREBE_OP_LD_B_MEM_AT_HL	0x46
#define LIBGREBE_OP_LD_B_A		0x47
#define LIBGREBE_OP_LD_C_B		0x48
#define LIBGREBE_OP_LD_C_C		0x49
#define LIBGREBE_OP_LD_C_D		0x4A
#define LIBGREBE_OP_LD_C_E		0x4B
#define LIBGREBE_OP_LD_C_H		0x4C
#define LIBGREBE_OP_LD_C_L		0x4D
#define LIBGREBE_OP_LD_C_MEM_AT_HL	0x4E
#define LIBGREBE_OP_LD_C_A		0x4F
#define LIBGREBE_OP_LD_D_B		0x50
#define LIBGREBE_OP_LD_D_C		0x51
#define LIBGREBE_OP_LD_D_D		0x52
#define LIBGREBE_OP_LD_D_E		0x53
#define LIBGREBE_OP_LD_D_H		0x54
#define LIBGREBE_OP_LD_D_L		0x55
#define LIBGREBE_OP_LD_D_MEM_AT_HL	0x56
#define LIBGREBE_OP_LD_D_A		0x57
#define LIBGREBE_OP_LD_E_B		0x58
#define LIBGREBE_OP_LD_E_C		0x59
#define LIBGREBE_OP_LD_E_D		0x5A
#define LIBGREBE_OP_LD_E_E		0x5B
#define LIBGREBE_OP_LD_E_H		0x5C
#define LIBGREBE_OP_LD_E_L		0x5D
#define LIBGREBE_OP_LD_E_MEM_AT_HL	0x5E
#define LIBGREBE_OP_LD_E_A		0x5F
#define LIBGREBE_OP_LD_H_B		0x60
#define LIBGREBE_OP_LD_H_C		0x61
#define LIBGREBE_OP_LD_H_D		0x62
#define LIBGREBE_OP_LD_H_E		0x63
#define LIBGREBE_OP_LD_H_H		0x64
#define LIBGREBE_OP_LD_H_L		0x65
#define LIBGREBE_OP_LD_H_MEM_AT_HL	0x66
#define LIBGREBE_OP_LD_H_A		0x67
#define LIBGREBE_OP_LD_L_B		0x68
#define LIBGREBE_OP_LD_L_C		0x69
#define LIBGREBE_OP_LD_L_D		0x6A
#define LIBGREBE_OP_LD_L_E		0x6B
#define LIBGREBE_OP_LD_L_H		0x6C
#define LIBGREBE_OP_LD_L_L		0x6D
#define LIBGREBE_OP_LD_L_MEM_AT_HL	0x6E
#define LIBGREBE_OP_LD_L_A		0x6F
#define LIBGREBE_OP_LD_MEM_AT_HL_B	0x70
#define LIBGREBE_OP_LD_MEM_AT_HL_C	0x71
#define LIBGREBE_OP_LD_MEM_AT_HL_D	0x72
#define LIBGREBE_OP_LD_MEM_AT_HL_E	0x73
#define LIBGREBE_OP_LD_MEM_AT_HL_H	0x74
#define LIBGREBE_OP_LD_MEM_AT_HL_L	0x75
#define LIBGREBE_OP_HALT		0x76
#define LIBGREBE_OP_LD_MEM_AT_HL_A	0x77
#define LIBGREBE_OP_LD_A_B		0x78
#define LIBGREBE_OP_LD_A_C		0x79
#define LIBGREBE_OP_LD_A_D		0x7A
#define LIBGREBE_OP_LD_A_E		0x7B
#define LIBGREBE_OP_LD_A_H		0x7C
#define LIBGREBE_OP_LD_A_L		0x7D
#define LIBGREBE_OP_LD_A_MEM_AT_HL	0x7E
#define LIBGREBE_OP_LD_A_A		0x7F
#define LIBGREBE_OP_ADD_A_B		0x80
#define LIBGREBE_OP_ADD_A_C		0x81
#define LIBGREBE_OP_ADD_A_D		0x82
#define LIBGREBE_OP_ADD_A_E		0x83
#define LIBGREBE_OP_ADD_A_H		0x84
#define LIBGREBE_OP_ADD_A_L		0x85
#define LIBGREBE_OP_ADD_A_MEM_AT_HL	0x86
#define LIBGREBE_OP_ADD_A_A		0x87
#define LIBGREBE_OP_ADC_A_B		0x88
#define LIBGREBE_OP_ADC_A_C		0x89
#define LIBGREBE_OP_ADC_A_D		0x8A
#define LIBGREBE_OP_ADC_A_E		0x8B
#define LIBGREBE_OP_ADC_A_H		0x8C
#define LIBGREBE_OP_ADC_A_L		0x8D
#define LIBGREBE_OP_ADC_A_MEM_AT_HL	0x8E
#define LIBGREBE_OP_ADC_A_A		0x8F
#define LIBGREBE_OP_SUB_B		0x90
#define LIBGREBE_OP_SUB_C		0x91
#define LIBGREBE_OP_SUB_D		0x92
#define LIBGREBE_OP_SUB_E		0x93
#define LIBGREBE_OP_SUB_H		0x94
#define LIBGREBE_OP_SUB_L		0x95
#define LIBGREBE_OP_SUB_MEM_AT_HL	0x96
#define LIBGREBE_OP_SUB_A		0x97
#define LIBGREBE_OP_SBC_A_B		0x98
#define LIBGREBE_OP_SBC_A_C		0x99
#define LIBGREBE_OP_SBC_A_D		0x9A
#define LIBGREBE_OP_SBC_A_E		0x9B
#define LIBGREBE_OP_SBC_A_H		0x9C
#define LIBGREBE_OP_SBC_A_L		0x9D
#define LIBGREBE_OP_SBC_A_MEM_AT_HL	0x9E
#define LIBGREBE_OP_SBC_A_A		0x9F
#define LIBGREBE_OP_AND_B		0xA0
#define LIBGREBE_OP_AND_C		0xA1
#define LIBGREBE_OP_AND_D		0xA2
#define LIBGREBE_OP_AND_E		0xA3
#define LIBGREBE_OP_AND_H		0xA4
#define LIBGREBE_OP_AND_L		0xA5
#define LIBGREBE_OP_AND_MEM_AT_HL	0xA6
#define LIBGREBE_OP_AND_A		0xA7
#define LIBGREBE_OP_XOR_B		0xA8
#define LIBGREBE_OP_XOR_C		0xA9
#define LIBGREBE_OP_XOR_D		0xAA
#define LIBGREBE_OP_XOR_E		0xAB
#define LIBGREBE_OP_XOR_H		0xAC
#define LIBGREBE_OP_XOR_L		0xAD
#define LIBGREBE_OP_XOR_MEM_AT_HL	0xAE
#define LIBGREBE_OP_XOR_A		0xAF
#define LIBGREBE_OP_OR_B		0xB0
#define LIBGREBE_OP_OR_C		0xB1
#define LIBGREBE_OP_OR_D		0xB2
#define LIBGREBE_OP_OR_E		0xB3
#define LIBGREBE_OP_OR_H		0xB4
#define LIBGREBE_OP_OR_L		0xB5
#define LIBGREBE_OP_OR_MEM_AT_HL	0xB6
#define LIBGREBE_OP_OR_A		0xB7
#define LIBGREBE_OP_CP_B		0xB8
#define LIBGREBE_OP_CP_C		0xB9
#define LIBGREBE_OP_CP_D		0xBA
#define LIBGREBE_OP_CP_E		0xBB
#define LIBGREBE_OP_CP_H		0xBC
#define LIBGREBE_OP_CP_L		0xBD
#define LIBGREBE_OP_CP_MEM_AT_HL	0xBE
#define LIBGREBE_OP_CP_A		0xBF
#define LIBGREBE_OP_RET_NZ		0xC0
#define LIBGREBE_OP_POP_BC		0xC1
#define LIBGREBE_OP_JP_NZ_a16		0xC2
#define LIBGREBE_OP_JP_a16		0xC3
#define LIBGREBE_OP_CALL_NZ_a16		0xC4
#define LIBGREBE_OP_PUSH_BC		0xC5
#define LIBGREBE_OP_ADD_A_d8		0xC6
#define LIBGREBE_OP_RST_00H		0xC7
#define LIBGREBE_OP_RET_Z		0xC8
#define LIBGREBE_OP_RET			0xC9
#define LIBGREBE_OP_JP_Z_a16		0xCA
#define LIBGREBE_OP_PREFIX_CB		0xCB
#define LIBGREBE_OP_CALL_Z_a16		0xCC
#define LIBGREBE_OP_CALL_a16		0xCD
#define LIBGREBE_OP_ADC_A_d8		0xCE
#define LIBGREBE_OP_RST_08H		0xCF
#define LIBGREBE_OP_RET_NC		0xD0
#define LIBGREBE_OP_POP_DE		0xD1
#define LIBGREBE_OP_JP_NC_a16		0xD2
#define LIBGREBE_OP_CALL_NC_a16		0xD4
#define LIBGREBE_OP_PUSH_DE		0xD5
#define LIBGREBE_OP_SUB_d8		0xD6
#define LIBGREBE_OP_RST_10H		0xD7
#define LIBGREBE_OP_RET_C		0xD8
#define LIBGREBE_OP_RETI		0xD9
#define LIBGREBE_OP_JP_C_a16		0xDA
#define LIBGREBE_OP_CALL_C_a16		0xDC
#define LIBGREBE_OP_SBC_A_d8		0xDE
#define LIBGREBE_OP_RST_18H		0xDF
#define LIBGREBE_OP_LDH_MEM_AT_a8_A	0xE0
#define LIBGREBE_OP_POP_HL		0xE1
#define LIBGREBE_OP_LD_MEM_AT_C_A	0xE2
#define LIBGREBE_OP_PUSH_HL		0xE5
#define LIBGREBE_OP_AND_d8		0xE6
#define LIBGREBE_OP_RST_20H		0xE7
#define LIBGREBE_OP_ADD_SP_r8		0xE8
#define LIBGREBE_OP_JP_HL		0xE9
#define LIBGREBE_OP_LD_MEM_AT_a16_A	0xEA
#define LIBGREBE_OP_XOR_d8		0xEE
#define LIBGREBE_OP_RST_28H		0xEF
#define LIBGREBE_OP_LDH_A_MEM_AT_a8	0xF0
#define LIBGREBE_OP_POP_AF		0xF1
#define LIBGREBE_OP_LD_A_MEM_AT_C	0xF2
#define LIBGREBE_OP_DI			0xF3
#define LIBGREBE_OP_PUSH_AF		0xF5
#define LIBGREBE_OP_OR_d8		0xF6
#define LIBGREBE_OP_RST_30H		0xF7
#define LIBGREBE_OP_LD_HL_SP_r8		0xF8
#define LIBGREBE_OP_LD_SP_HL		0xF9
#define LIBGREBE_OP_LD_A_MEM_AT_a16	0xFA
#define LIBGREBE_OP_EI			0xFB
#define LIBGREBE_OP_CP_d8		0xFE
#define LIBGREBE_OP_RST_38H		0xFF

// PREFIX CB
#define LIBGREBE_OP_RLC_B		0x00
#define LIBGREBE_OP_RLC_C		0x01
#define LIBGREBE_OP_RLC_D		0x02
#define LIBGREBE_OP_RLC_E		0x03
#define LIBGREBE_OP_RLC_H		0x04
#define LIBGREBE_OP_RLC_L		0x05
#define LIBGREBE_OP_RLC_MEM_AT_HL	0x06
#define LIBGREBE_OP_RLC_A		0x07
#define LIBGREBE_OP_RRC_B		0x08
#define LIBGREBE_OP_RRC_C		0x09
#define LIBGREBE_OP_RRC_D		0x0A
#define LIBGREBE_OP_RRC_E		0x0B
#define LIBGREBE_OP_RRC_H		0x0C
#define LIBGREBE_OP_RRC_L		0x0D
#define LIBGREBE_OP_RRC_MEM_AT_HL	0x0E
#define LIBGREBE_OP_RRC_A		0x0F
#define LIBGREBE_OP_RL_B		0x10
#define LIBGREBE_OP_RL_C		0x11
#define LIBGREBE_OP_RL_D		0x12
#define LIBGREBE_OP_RL_E		0x13
#define LIBGREBE_OP_RL_H		0x14
#define LIBGREBE_OP_RL_L		0x15
#define LIBGREBE_OP_RL_MEM_AT_HL	0x16
#define LIBGREBE_OP_RL_A		0x17
#define LIBGREBE_OP_RR_B		0x18
#define LIBGREBE_OP_RR_C		0x19
#define LIBGREBE_OP_RR_D		0x1A
#define LIBGREBE_OP_RR_E		0x1B
#define LIBGREBE_OP_RR_H		0x1C
#define LIBGREBE_OP_RR_L		0x1D
#define LIBGREBE_OP_RR_MEM_AT_HL	0x1E
#define LIBGREBE_OP_RR_A		0x1F
#define LIBGREBE_OP_SLA_B		0x20
#define LIBGREBE_OP_SLA_C		0x21
#define LIBGREBE_OP_SLA_D		0x22
#define LIBGREBE_OP_SLA_E		0x23
#define LIBGREBE_OP_SLA_H		0x24
#define LIBGREBE_OP_SLA_L		0x25
#define LIBGREBE_OP_SLA_MEM_AT_HL	0x26
#define LIBGREBE_OP_SLA_A		0x27
#define LIBGREBE_OP_SRA_B		0x28
#define LIBGREBE_OP_SRA_C		0x29
#define LIBGREBE_OP_SRA_D		0x2A
#define LIBGREBE_OP_SRA_E		0x2B
#define LIBGREBE_OP_SRA_H		0x2C
#define LIBGREBE_OP_SRA_L		0x2D
#define LIBGREBE_OP_SRA_MEM_AT_HL	0x2E
#define LIBGREBE_OP_SRA_A		0x2F
#define LIBGREBE_OP_SWAP_B		0x30
#define LIBGREBE_OP_SWAP_C		0x31
#define LIBGREBE_OP_SWAP_D		0x32
#define LIBGREBE_OP_SWAP_E		0x33
#define LIBGREBE_OP_SWAP_H		0x34
#define LIBGREBE_OP_SWAP_L		0x35
#define LIBGREBE_OP_SWAP_MEM_AT_HL	0x36
#define LIBGREBE_OP_SWAP_A		0x37
#define LIBGREBE_OP_SRL_B		0x38
#define LIBGREBE_OP_SRL_C		0x39
#define LIBGREBE_OP_SRL_D		0x3A
#define LIBGREBE_OP_SRL_E		0x3B
#define LIBGREBE_OP_SRL_H		0x3C
#define LIBGREBE_OP_SRL_L		0x3D
#define LIBGREBE_OP_SRL_MEM_AT_HL	0x3E
#define LIBGREBE_OP_SRL_A		0x3F
#define LIBGREBE_OP_BIT_0_B		0x40
#define LIBGREBE_OP_BIT_0_C		0x41
#define LIBGREBE_OP_BIT_0_D		0x42
#define LIBGREBE_OP_BIT_0_E		0x43
#define LIBGREBE_OP_BIT_0_H		0x44
#define LIBGREBE_OP_BIT_0_L		0x45
#define LIBGREBE_OP_BIT_0_MEM_AT_HL	0x46
#define LIBGREBE_OP_BIT_0_A		0x47
#define LIBGREBE_OP_BIT_1_B		0x48
#define LIBGREBE_OP_BIT_1_C		0x49
#define LIBGREBE_OP_BIT_1_D		0x4A
#define LIBGREBE_OP_BIT_1_E		0x4B
#define LIBGREBE_OP_BIT_1_H		0x4C
#define LIBGREBE_OP_BIT_1_L		0x4D
#define LIBGREBE_OP_BIT_1_MEM_AT_HL	0x4E
#define LIBGREBE_OP_BIT_1_A		0x4F
#define LIBGREBE_OP_BIT_2_B		0x50
#define LIBGREBE_OP_BIT_2_C		0x51
#define LIBGREBE_OP_BIT_2_D		0x52
#define LIBGREBE_OP_BIT_2_E		0x53
#define LIBGREBE_OP_BIT_2_H		0x54
#define LIBGREBE_OP_BIT_2_L		0x55
#define LIBGREBE_OP_BIT_2_MEM_AT_HL	0x56
#define LIBGREBE_OP_BIT_2_A		0x57
#define LIBGREBE_OP_BIT_3_B		0x58
#define LIBGREBE_OP_BIT_3_C		0x59
#define LIBGREBE_OP_BIT_3_D		0x5A
#define LIBGREBE_OP_BIT_3_E		0x5B
#define LIBGREBE_OP_BIT_3_H		0x5C
#define LIBGREBE_OP_BIT_3_L		0x5D
#define LIBGREBE_OP_BIT_3_MEM_AT_HL	0x5E
#define LIBGREBE_OP_BIT_3_A		0x5F
#define LIBGREBE_OP_BIT_4_B		0x60
#define LIBGREBE_OP_BIT_4_C		0x61
#define LIBGREBE_OP_BIT_4_D		0x62
#define LIBGREBE_OP_BIT_4_E		0x63
#define LIBGREBE_OP_BIT_4_H		0x64
#define LIBGREBE_OP_BIT_4_L		0x65
#define LIBGREBE_OP_BIT_4_MEM_AT_HL	0x66
#define LIBGREBE_OP_BIT_4_A		0x67
#define LIBGREBE_OP_BIT_5_B		0x68
#define LIBGREBE_OP_BIT_5_C		0x69
#define LIBGREBE_OP_BIT_5_D		0x6A
#define LIBGREBE_OP_BIT_5_E		0x6B
#define LIBGREBE_OP_BIT_5_H		0x6C
#define LIBGREBE_OP_BIT_5_L		0x6D
#define LIBGREBE_OP_BIT_5_MEM_AT_HL	0x6E
#define LIBGREBE_OP_BIT_5_A		0x6F
#define LIBGREBE_OP_BIT_6_B		0x70
#define LIBGREBE_OP_BIT_6_C		0x71
#define LIBGREBE_OP_BIT_6_D		0x72
#define LIBGREBE_OP_BIT_6_E		0x73
#define LIBGREBE_OP_BIT_6_H		0x74
#define LIBGREBE_OP_BIT_6_L		0x75
#define LIBGREBE_OP_BIT_6_MEM_AT_HL	0x76
#define LIBGREBE_OP_BIT_6_A		0x77
#define LIBGREBE_OP_BIT_7_B		0x78
#define LIBGREBE_OP_BIT_7_C		0x79
#define LIBGREBE_OP_BIT_7_D		0x7A
#define LIBGREBE_OP_BIT_7_E		0x7B
#define LIBGREBE_OP_BIT_7_H		0x7C
#define LIBGREBE_OP_BIT_7_L		0x7D
#define LIBGREBE_OP_BIT_7_MEM_AT_HL	0x7E
#define LIBGREBE_OP_BIT_7_A		0x7F
#define LIBGREBE_OP_RES_0_B		0x80
#define LIBGREBE_OP_RES_0_C		0x81
#define LIBGREBE_OP_RES_0_D		0x82
#define LIBGREBE_OP_RES_0_E		0x83
#define LIBGREBE_OP_RES_0_H		0x84
#define LIBGREBE_OP_RES_0_L		0x85
#define LIBGREBE_OP_RES_0_MEM_AT_HL	0x86
#define LIBGREBE_OP_RES_0_A		0x87
#define LIBGREBE_OP_RES_1_B		0x88
#define LIBGREBE_OP_RES_1_C		0x89
#define LIBGREBE_OP_RES_1_D		0x8A
#define LIBGREBE_OP_RES_1_E		0x8B
#define LIBGREBE_OP_RES_1_H		0x8C
#define LIBGREBE_OP_RES_1_L		0x8D
#define LIBGREBE_OP_RES_1_MEM_AT_HL	0x8E
#define LIBGREBE_OP_RES_1_A		0x8F
#define LIBGREBE_OP_RES_2_B		0x90
#define LIBGREBE_OP_RES_2_C		0x91
#define LIBGREBE_OP_RES_2_D		0x92
#define LIBGREBE_OP_RES_2_E		0x93
#define LIBGREBE_OP_RES_2_H		0x94
#define LIBGREBE_OP_RES_2_L		0x95
#define LIBGREBE_OP_RES_2_MEM_AT_HL	0x96
#define LIBGREBE_OP_RES_2_A		0x97
#define LIBGREBE_OP_RES_3_B		0x98
#define LIBGREBE_OP_RES_3_C		0x99
#define LIBGREBE_OP_RES_3_D		0x9A
#define LIBGREBE_OP_RES_3_E		0x9B
#define LIBGREBE_OP_RES_3_H		0x9C
#define LIBGREBE_OP_RES_3_L		0x9D
#define LIBGREBE_OP_RES_3_MEM_AT_HL	0x9E
#define LIBGREBE_OP_RES_3_A		0x9F
#define LIBGREBE_OP_RES_4_B		0xA0
#define LIBGREBE_OP_RES_4_C		0xA1
#define LIBGREBE_OP_RES_4_D		0xA2
#define LIBGREBE_OP_RES_4_E		0xA3
#define LIBGREBE_OP_RES_4_H		0xA4
#define LIBGREBE_OP_RES_4_L		0xA5
#define LIBGREBE_OP_RES_4_MEM_AT_HL	0xA6
#define LIBGREBE_OP_RES_4_A		0xA7
#define LIBGREBE_OP_RES_5_B		0xA8
#define LIBGREBE_OP_RES_5_C		0xA9
#define LIBGREBE_OP_RES_5_D		0xAA
#define LIBGREBE_OP_RES_5_E		0xAB
#define LIBGREBE_OP_RES_5_H		0xAC
#define LIBGREBE_OP_RES_5_L		0xAD
#define LIBGREBE_OP_RES_5_MEM_AT_HL	0xAE
#define LIBGREBE_OP_RES_5_A		0xAF
#define LIBGREBE_OP_RES_6_B		0xB0
#define LIBGREBE_OP_RES_6_C		0xB1
#define LIBGREBE_OP_RES_6_D		0xB2
#define LIBGREBE_OP_RES_6_E		0xB3
#define LIBGREBE_OP_RES_6_H		0xB4
#define LIBGREBE_OP_RES_6_L		0xB5
#define LIBGREBE_OP_RES_6_MEM_AT_HL	0xB6
#define LIBGREBE_OP_RES_6_A		0xB7
#define LIBGREBE_OP_RES_7_B		0xB8
#define LIBGREBE_OP_RES_7_C		0xB9
#define LIBGREBE_OP_RES_7_D		0xBA
#define LIBGREBE_OP_RES_7_E		0xBB
#define LIBGREBE_OP_RES_7_H		0xBC
#define LIBGREBE_OP_RES_7_L		0xBD
#define LIBGREBE_OP_RES_7_MEM_AT_HL	0xBE
#define LIBGREBE_OP_RES_7_A		0xBF
#define LIBGREBE_OP_SET_0_B		0xC0
#define LIBGREBE_OP_SET_0_C		0xC1
#define LIBGREBE_OP_SET_0_D		0xC2
#define LIBGREBE_OP_SET_0_E		0xC3
#define LIBGREBE_OP_SET_0_H		0xC4
#define LIBGREBE_OP_SET_0_L		0xC5
#define LIBGREBE_OP_SET_0_MEM_AT_HL	0xC6
#define LIBGREBE_OP_SET_0_A		0xC7
#define LIBGREBE_OP_SET_1_B		0xC8
#define LIBGREBE_OP_SET_1_C		0xC9
#define LIBGREBE_OP_SET_1_D		0xCA
#define LIBGREBE_OP_SET_1_E		0xCB
#define LIBGREBE_OP_SET_1_H		0xCC
#define LIBGREBE_OP_SET_1_L		0xCD
#define LIBGREBE_OP_SET_1_MEM_AT_HL	0xCE
#define LIBGREBE_OP_SET_1_A		0xCF
#define LIBGREBE_OP_SET_2_B		0xD0
#define LIBGREBE_OP_SET_2_C		0xD1
#define LIBGREBE_OP_SET_2_D		0xD2
#define LIBGREBE_OP_SET_2_E		0xD3
#define LIBGREBE_OP_SET_2_H		0xD4
#define LIBGREBE_OP_SET_2_L		0xD5
#define LIBGREBE_OP_SET_2_MEM_AT_HL	0xD6
#define LIBGREBE_OP_SET_2_A		0xD7
#define LIBGREBE_OP_SET_3_B		0xD8
#define LIBGREBE_OP_SET_3_C		0xD9
#define LIBGREBE_OP_SET_3_D		0xDA
#define LIBGREBE_OP_SET_3_E		0xDB
#define LIBGREBE_OP_SET_3_H		0xDC
#define LIBGREBE_OP_SET_3_L		0xDD
#define LIBGREBE_OP_SET_3_MEM_AT_HL	0xDE
#define LIBGREBE_OP_SET_3_A		0xDF
#define LIBGREBE_OP_SET_4_B		0xE0
#define LIBGREBE_OP_SET_4_C		0xE1
#define LIBGREBE_OP_SET_4_D		0xE2
#define LIBGREBE_OP_SET_4_E		0xE3
#define LIBGREBE_OP_SET_4_H		0xE4
#define LIBGREBE_OP_SET_4_L		0xE5
#define LIBGREBE_OP_SET_4_MEM_AT_HL	0xE6
#define LIBGREBE_OP_SET_4_A		0xE7
#define LIBGREBE_OP_SET_5_B		0xE8
#define LIBGREBE_OP_SET_5_C		0xE9
#define LIBGREBE_OP_SET_5_D		0xEA
#define LIBGREBE_OP_SET_5_E		0xEB
#define LIBGREBE_OP_SET_5_H		0xEC
#define LIBGREBE_OP_SET_5_L		0xED
#define LIBGREBE_OP_SET_5_MEM_AT_HL	0xEE
#define LIBGREBE_OP_SET_5_A		0xEF
#define LIBGREBE_OP_SET_6_B		0xF0
#define LIBGREBE_OP_SET_6_C		0xF1
#define LIBGREBE_OP_SET_6_D		0xF2
#define LIBGREBE_OP_SET_6_E		0xF3
#define LIBGREBE_OP_SET_6_H		0xF4
#define LIBGREBE_OP_SET_6_L		0xF5
#define LIBGREBE_OP_SET_6_MEM_AT_HL	0xF6
#define LIBGREBE_OP_SET_6_A		0xF7
#define LIBGREBE_OP_SET_7_B		0xF8
#define LIBGREBE_OP_SET_7_C		0xF9
#define LIBGREBE_OP_SET_7_D		0xFA
#define LIBGREBE_OP_SET_7_E		0xFB
#define LIBGREBE_OP_SET_7_H		0xFC
#define LIBGREBE_OP_SET_7_L		0xFD
#define LIBGREBE_OP_SET_7_MEM_AT_HL	0xFE
#define LIBGREBE_OP_SET_7_A		0xFF

#endif //LIBGREBE_OPCODES_HPP
