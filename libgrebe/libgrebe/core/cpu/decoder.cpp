#include <libgrebe/core/cpu/decoder.hpp>
#include <libgrebe/core/cpu/opcodes.hpp>

std::function<void(State&)> Decoder::decode(const std::uint8_t& opcode)
{
	switch (opcode)
	{
		case LIBGREBE_OP_NOP:
			return &Instructions::NOP;
		case LIBGREBE_OP_LD_BC_d16:
			return &Instructions::LD_BC_d16;
		case LIBGREBE_OP_LD_MEM_AT_BC_A:
			return &Instructions::LD_MEM_AT_BC_A;
		case LIBGREBE_OP_INC_BC:
			return &Instructions::INC_BC;
		case LIBGREBE_OP_INC_B:
			return &Instructions::INC_B;
		case LIBGREBE_OP_DEC_B:
			return &Instructions::DEC_B;
		case LIBGREBE_OP_LD_B_d8:
			return &Instructions::LD_B_d8;
		case LIBGREBE_OP_RLCA:
			return &Instructions::RLCA;
		case LIBGREBE_OP_LD_MEM_AT_a16_SP:
			return &Instructions::LD_MEM_AT_a16_SP;
		case LIBGREBE_OP_ADD_HL_BC:
			return &Instructions::ADD_HL_BC;
		case LIBGREBE_OP_LD_A_MEM_AT_BC:
			return &Instructions::LD_A_MEM_AT_BC;
		case LIBGREBE_OP_DEC_BC:
			return &Instructions::DEC_BC;
		case LIBGREBE_OP_INC_C:
			return &Instructions::INC_C;
		case LIBGREBE_OP_DEC_C:
			return &Instructions::DEC_C;
		case LIBGREBE_OP_LD_C_d8:
			return &Instructions::LD_C_d8;
		case LIBGREBE_OP_RRCA:
			return &Instructions::RRCA;
		case LIBGREBE_OP_STOP_d8:
			return &Instructions::STOP_d8;
		case LIBGREBE_OP_LD_DE_d16:
			return &Instructions::LD_DE_d16;
		case LIBGREBE_OP_LD_MEM_AT_DE_A:
			return &Instructions::LD_MEM_AT_DE_A;
		case LIBGREBE_OP_INC_DE:
			return &Instructions::INC_DE;
		case LIBGREBE_OP_INC_D:
			return &Instructions::INC_D;
		case LIBGREBE_OP_DEC_D:
			return &Instructions::DEC_D;
		case LIBGREBE_OP_LD_D_d8:
			return &Instructions::LD_D_d8;
		case LIBGREBE_OP_RLA:
			return &Instructions::RLA;
		case LIBGREBE_OP_JR_r8:
			return &Instructions::JR_r8;
		case LIBGREBE_OP_ADD_HL_DE:
			return &Instructions::ADD_HL_DE;
		case LIBGREBE_OP_LD_A_MEM_AT_DE:
			return &Instructions::LD_A_MEM_AT_DE;
		case LIBGREBE_OP_DEC_DE:
			return &Instructions::DEC_DE;
		case LIBGREBE_OP_INC_E:
			return &Instructions::INC_E;
		case LIBGREBE_OP_DEC_E:
			return &Instructions::DEC_E;
		case LIBGREBE_OP_LD_E_d8:
			return &Instructions::LD_E_d8;
		case LIBGREBE_OP_RRA:
			return &Instructions::RRA;
		case LIBGREBE_OP_JR_NZ_r8:
			return &Instructions::JR_NZ_r8;
		case LIBGREBE_OP_LD_HL_d16:
			return &Instructions::LD_HL_d16;
		case LIBGREBE_OP_LDI_MEM_AT_HL_A:
			return &Instructions::LDI_MEM_AT_HL_A;
		case LIBGREBE_OP_INC_HL:
			return &Instructions::INC_HL;
		case LIBGREBE_OP_INC_H:
			return &Instructions::INC_H;
		case LIBGREBE_OP_DEC_H:
			return &Instructions::DEC_H;
		case LIBGREBE_OP_LD_H_d8:
			return &Instructions::LD_H_d8;
		case LIBGREBE_OP_DAA:
			return &Instructions::DAA;
		case LIBGREBE_OP_JR_Z_r8:
			return &Instructions::JR_Z_r8;
		case LIBGREBE_OP_ADD_HL_HL:
			return &Instructions::ADD_HL_HL;
		case LIBGREBE_OP_LDI_A_MEM_AT_HL:
			return &Instructions::LDI_A_MEM_AT_HL;
		case LIBGREBE_OP_DEC_HL:
			return &Instructions::DEC_HL;
		case LIBGREBE_OP_INC_L:
			return &Instructions::INC_L;
		case LIBGREBE_OP_DEC_L:
			return &Instructions::DEC_L;
		case LIBGREBE_OP_LD_L_d8:
			return &Instructions::LD_L_d8;
		case LIBGREBE_OP_CPL:
			return &Instructions::CPL;
		case LIBGREBE_OP_JR_NC_r8:
			return &Instructions::JR_NC_r8;
		case LIBGREBE_OP_LD_SP_d16:
			return &Instructions::LD_SP_d16;
		case LIBGREBE_OP_LDD_MEM_AT_HL_A:
			return &Instructions::LDD_MEM_AT_HL_A;
		case LIBGREBE_OP_INC_SP:
			return &Instructions::INC_SP;
		case LIBGREBE_OP_INC_MEM_AT_HL:
			return &Instructions::INC_MEM_AT_HL;
		case LIBGREBE_OP_DEC_MEM_AT_HL:
			return &Instructions::DEC_MEM_AT_HL;
		case LIBGREBE_OP_LD_MEM_AT_HL_d8:
			return &Instructions::LD_MEM_AT_HL_d8;
		case LIBGREBE_OP_SCF:
			return &Instructions::SCF;
		case LIBGREBE_OP_JR_C_r8:
			return &Instructions::JR_C_r8;
		case LIBGREBE_OP_ADD_HL_SP:
			return &Instructions::ADD_HL_SP;
		case LIBGREBE_OP_LDD_A_MEM_AT_HL:
			return &Instructions::LDD_A_MEM_AT_HL;
		case LIBGREBE_OP_DEC_SP:
			return &Instructions::DEC_SP;
		case LIBGREBE_OP_INC_A:
			return &Instructions::INC_A;
		case LIBGREBE_OP_DEC_A:
			return &Instructions::DEC_A;
		case LIBGREBE_OP_LD_A_d8:
			return &Instructions::LD_A_d8;
		case LIBGREBE_OP_CCF:
			return &Instructions::CCF;
		case LIBGREBE_OP_LD_B_B:
			return &Instructions::LD_B_B;
		case LIBGREBE_OP_LD_B_C:
			return &Instructions::LD_B_C;
		case LIBGREBE_OP_LD_B_D:
			return &Instructions::LD_B_D;
		case LIBGREBE_OP_LD_B_E:
			return &Instructions::LD_B_E;
		case LIBGREBE_OP_LD_B_H:
			return &Instructions::LD_B_H;
		case LIBGREBE_OP_LD_B_L:
			return &Instructions::LD_B_L;
		case LIBGREBE_OP_LD_B_MEM_AT_HL:
			return &Instructions::LD_B_MEM_AT_HL;
		case LIBGREBE_OP_LD_B_A:
			return &Instructions::LD_B_A;
		case LIBGREBE_OP_LD_C_B:
			return &Instructions::LD_C_B;
		case LIBGREBE_OP_LD_C_C:
			return &Instructions::LD_C_C;
		case LIBGREBE_OP_LD_C_D:
			return &Instructions::LD_C_D;
		case LIBGREBE_OP_LD_C_E:
			return &Instructions::LD_C_E;
		case LIBGREBE_OP_LD_C_H:
			return &Instructions::LD_C_H;
		case LIBGREBE_OP_LD_C_L:
			return &Instructions::LD_C_L;
		case LIBGREBE_OP_LD_C_MEM_AT_HL:
			return &Instructions::LD_C_MEM_AT_HL;
		case LIBGREBE_OP_LD_C_A:
			return &Instructions::LD_C_A;
		case LIBGREBE_OP_LD_D_B:
			return &Instructions::LD_D_B;
		case LIBGREBE_OP_LD_D_C:
			return &Instructions::LD_D_C;
		case LIBGREBE_OP_LD_D_D:
			return &Instructions::LD_D_D;
		case LIBGREBE_OP_LD_D_E:
			return &Instructions::LD_D_E;
		case LIBGREBE_OP_LD_D_H:
			return &Instructions::LD_D_H;
		case LIBGREBE_OP_LD_D_L:
			return &Instructions::LD_D_L;
		case LIBGREBE_OP_LD_D_MEM_AT_HL:
			return &Instructions::LD_D_MEM_AT_HL;
		case LIBGREBE_OP_LD_D_A:
			return &Instructions::LD_D_A;
		case LIBGREBE_OP_LD_E_B:
			return &Instructions::LD_E_B;
		case LIBGREBE_OP_LD_E_C:
			return &Instructions::LD_E_C;
		case LIBGREBE_OP_LD_E_D:
			return &Instructions::LD_E_D;
		case LIBGREBE_OP_LD_E_E:
			return &Instructions::LD_E_E;
		case LIBGREBE_OP_LD_E_H:
			return &Instructions::LD_E_H;
		case LIBGREBE_OP_LD_E_L:
			return &Instructions::LD_E_L;
		case LIBGREBE_OP_LD_E_MEM_AT_HL:
			return &Instructions::LD_E_MEM_AT_HL;
		case LIBGREBE_OP_LD_E_A:
			return &Instructions::LD_E_A;
		case LIBGREBE_OP_LD_H_B:
			return &Instructions::LD_H_B;
		case LIBGREBE_OP_LD_H_C:
			return &Instructions::LD_H_C;
		case LIBGREBE_OP_LD_H_D:
			return &Instructions::LD_H_D;
		case LIBGREBE_OP_LD_H_E:
			return &Instructions::LD_H_E;
		case LIBGREBE_OP_LD_H_H:
			return &Instructions::LD_H_H;
		case LIBGREBE_OP_LD_H_L:
			return &Instructions::LD_H_L;
		case LIBGREBE_OP_LD_H_MEM_AT_HL:
			return &Instructions::LD_H_MEM_AT_HL;
		case LIBGREBE_OP_LD_H_A:
			return &Instructions::LD_H_A;
		case LIBGREBE_OP_LD_L_B:
			return &Instructions::LD_L_B;
		case LIBGREBE_OP_LD_L_C:
			return &Instructions::LD_L_C;
		case LIBGREBE_OP_LD_L_D:
			return &Instructions::LD_L_D;
		case LIBGREBE_OP_LD_L_E:
			return &Instructions::LD_L_E;
		case LIBGREBE_OP_LD_L_H:
			return &Instructions::LD_L_H;
		case LIBGREBE_OP_LD_L_L:
			return &Instructions::LD_L_L;
		case LIBGREBE_OP_LD_L_MEM_AT_HL:
			return &Instructions::LD_L_MEM_AT_HL;
		case LIBGREBE_OP_LD_L_A:
			return &Instructions::LD_L_A;
		case LIBGREBE_OP_LD_MEM_AT_HL_B:
			return &Instructions::LD_MEM_AT_HL_B;
		case LIBGREBE_OP_LD_MEM_AT_HL_C:
			return &Instructions::LD_MEM_AT_HL_C;
		case LIBGREBE_OP_LD_MEM_AT_HL_D:
			return &Instructions::LD_MEM_AT_HL_D;
		case LIBGREBE_OP_LD_MEM_AT_HL_E:
			return &Instructions::LD_MEM_AT_HL_E;
		case LIBGREBE_OP_LD_MEM_AT_HL_H:
			return &Instructions::LD_MEM_AT_HL_H;
		case LIBGREBE_OP_LD_MEM_AT_HL_L:
			return &Instructions::LD_MEM_AT_HL_L;
		case LIBGREBE_OP_HALT:
			return &Instructions::HALT;
		case LIBGREBE_OP_LD_MEM_AT_HL_A:
			return &Instructions::LD_MEM_AT_HL_A;
		case LIBGREBE_OP_LD_A_B:
			return &Instructions::LD_A_B;
		case LIBGREBE_OP_LD_A_C:
			return &Instructions::LD_A_C;
		case LIBGREBE_OP_LD_A_D:
			return &Instructions::LD_A_D;
		case LIBGREBE_OP_LD_A_E:
			return &Instructions::LD_A_E;
		case LIBGREBE_OP_LD_A_H:
			return &Instructions::LD_A_H;
		case LIBGREBE_OP_LD_A_L:
			return &Instructions::LD_A_L;
		case LIBGREBE_OP_LD_A_MEM_AT_HL:
			return &Instructions::LD_A_MEM_AT_HL;
		case LIBGREBE_OP_LD_A_A:
			return &Instructions::LD_A_A;
		case LIBGREBE_OP_ADD_A_B:
			return &Instructions::ADD_A_B;
		case LIBGREBE_OP_ADD_A_C:
			return &Instructions::ADD_A_C;
		case LIBGREBE_OP_ADD_A_D:
			return &Instructions::ADD_A_D;
		case LIBGREBE_OP_ADD_A_E:
			return &Instructions::ADD_A_E;
		case LIBGREBE_OP_ADD_A_H:
			return &Instructions::ADD_A_H;
		case LIBGREBE_OP_ADD_A_L:
			return &Instructions::ADD_A_L;
		case LIBGREBE_OP_ADD_A_MEM_AT_HL:
			return &Instructions::ADD_A_MEM_AT_HL;
		case LIBGREBE_OP_ADD_A_A:
			return &Instructions::ADD_A_A;
		case LIBGREBE_OP_ADC_A_B:
			return &Instructions::ADC_A_B;
		case LIBGREBE_OP_ADC_A_C:
			return &Instructions::ADC_A_C;
		case LIBGREBE_OP_ADC_A_D:
			return &Instructions::ADC_A_D;
		case LIBGREBE_OP_ADC_A_E:
			return &Instructions::ADC_A_E;
		case LIBGREBE_OP_ADC_A_H:
			return &Instructions::ADC_A_H;
		case LIBGREBE_OP_ADC_A_L:
			return &Instructions::ADC_A_L;
		case LIBGREBE_OP_ADC_A_MEM_AT_HL:
			return &Instructions::ADC_A_MEM_AT_HL;
		case LIBGREBE_OP_ADC_A_A:
			return &Instructions::ADC_A_A;
		case LIBGREBE_OP_SUB_B:
			return &Instructions::SUB_B;
		case LIBGREBE_OP_SUB_C:
			return &Instructions::SUB_C;
		case LIBGREBE_OP_SUB_D:
			return &Instructions::SUB_D;
		case LIBGREBE_OP_SUB_E:
			return &Instructions::SUB_E;
		case LIBGREBE_OP_SUB_H:
			return &Instructions::SUB_H;
		case LIBGREBE_OP_SUB_L:
			return &Instructions::SUB_L;
		case LIBGREBE_OP_SUB_MEM_AT_HL:
			return &Instructions::SUB_MEM_AT_HL;
		case LIBGREBE_OP_SUB_A:
			return &Instructions::SUB_A;
		case LIBGREBE_OP_SBC_A_B:
			return &Instructions::SBC_A_B;
		case LIBGREBE_OP_SBC_A_C:
			return &Instructions::SBC_A_C;
		case LIBGREBE_OP_SBC_A_D:
			return &Instructions::SBC_A_D;
		case LIBGREBE_OP_SBC_A_E:
			return &Instructions::SBC_A_E;
		case LIBGREBE_OP_SBC_A_H:
			return &Instructions::SBC_A_H;
		case LIBGREBE_OP_SBC_A_L:
			return &Instructions::SBC_A_L;
		case LIBGREBE_OP_SBC_A_MEM_AT_HL:
			return &Instructions::SBC_A_MEM_AT_HL;
		case LIBGREBE_OP_SBC_A_A:
			return &Instructions::SBC_A_A;
		case LIBGREBE_OP_AND_B:
			return &Instructions::AND_B;
		case LIBGREBE_OP_AND_C:
			return &Instructions::AND_C;
		case LIBGREBE_OP_AND_D:
			return &Instructions::AND_D;
		case LIBGREBE_OP_AND_E:
			return &Instructions::AND_E;
		case LIBGREBE_OP_AND_H:
			return &Instructions::AND_H;
		case LIBGREBE_OP_AND_L:
			return &Instructions::AND_L;
		case LIBGREBE_OP_AND_MEM_AT_HL:
			return &Instructions::AND_MEM_AT_HL;
		case LIBGREBE_OP_AND_A:
			return &Instructions::AND_A;
		case LIBGREBE_OP_XOR_B:
			return &Instructions::XOR_B;
		case LIBGREBE_OP_XOR_C:
			return &Instructions::XOR_C;
		case LIBGREBE_OP_XOR_D:
			return &Instructions::XOR_D;
		case LIBGREBE_OP_XOR_E:
			return &Instructions::XOR_E;
		case LIBGREBE_OP_XOR_H:
			return &Instructions::XOR_H;
		case LIBGREBE_OP_XOR_L:
			return &Instructions::XOR_L;
		case LIBGREBE_OP_XOR_MEM_AT_HL:
			return &Instructions::XOR_MEM_AT_HL;
		case LIBGREBE_OP_XOR_A:
			return &Instructions::XOR_A;
		case LIBGREBE_OP_OR_B:
			return &Instructions::OR_B;
		case LIBGREBE_OP_OR_C:
			return &Instructions::OR_C;
		case LIBGREBE_OP_OR_D:
			return &Instructions::OR_D;
		case LIBGREBE_OP_OR_E:
			return &Instructions::OR_E;
		case LIBGREBE_OP_OR_H:
			return &Instructions::OR_H;
		case LIBGREBE_OP_OR_L:
			return &Instructions::OR_L;
		case LIBGREBE_OP_OR_MEM_AT_HL:
			return &Instructions::OR_MEM_AT_HL;
		case LIBGREBE_OP_OR_A:
			return &Instructions::OR_A;
		case LIBGREBE_OP_CP_B:
			return &Instructions::CP_B;
		case LIBGREBE_OP_CP_C:
			return &Instructions::CP_C;
		case LIBGREBE_OP_CP_D:
			return &Instructions::CP_D;
		case LIBGREBE_OP_CP_E:
			return &Instructions::CP_E;
		case LIBGREBE_OP_CP_H:
			return &Instructions::CP_H;
		case LIBGREBE_OP_CP_L:
			return &Instructions::CP_L;
		case LIBGREBE_OP_CP_MEM_AT_HL:
			return &Instructions::CP_MEM_AT_HL;
		case LIBGREBE_OP_CP_A:
			return &Instructions::CP_A;
		case LIBGREBE_OP_RET_NZ:
			return &Instructions::RET_NZ;
		case LIBGREBE_OP_POP_BC:
			return &Instructions::POP_BC;
		case LIBGREBE_OP_JP_NZ_a16:
			return &Instructions::JP_NZ_a16;
		case LIBGREBE_OP_JP_a16:
			return &Instructions::JP_a16;
		case LIBGREBE_OP_CALL_NZ_a16:
			return &Instructions::CALL_NZ_a16;
		case LIBGREBE_OP_PUSH_BC:
			return &Instructions::PUSH_BC;
		case LIBGREBE_OP_ADD_A_d8:
			return &Instructions::ADD_A_d8;
		case LIBGREBE_OP_RST_00H:
			return &Instructions::RST_00H;
		case LIBGREBE_OP_RET_Z:
			return &Instructions::RET_Z;
		case LIBGREBE_OP_RET:
			return &Instructions::RET;
		case LIBGREBE_OP_JP_Z_a16:
			return &Instructions::JP_Z_a16;
		case LIBGREBE_OP_PREFIX_CB:
			return &Instructions::PREFIX_CB;
		case LIBGREBE_OP_CALL_Z_a16:
			return &Instructions::CALL_Z_a16;
		case LIBGREBE_OP_CALL_a16:
			return &Instructions::CALL_a16;
		case LIBGREBE_OP_ADC_A_d8:
			return &Instructions::ADC_A_d8;
		case LIBGREBE_OP_RST_08H:
			return &Instructions::RST_08H;
		case LIBGREBE_OP_RET_NC:
			return &Instructions::RET_NC;
		case LIBGREBE_OP_POP_DE:
			return &Instructions::POP_DE;
		case LIBGREBE_OP_JP_NC_a16:
			return &Instructions::JP_NC_a16;
		case LIBGREBE_OP_CALL_NC_a16:
			return &Instructions::CALL_NC_a16;
		case LIBGREBE_OP_PUSH_DE:
			return &Instructions::PUSH_DE;
		case LIBGREBE_OP_SUB_d8:
			return &Instructions::SUB_d8;
		case LIBGREBE_OP_RST_10H:
			return &Instructions::RST_10H;
		case LIBGREBE_OP_RET_C:
			return &Instructions::RET_C;
		case LIBGREBE_OP_RETI:
			return &Instructions::RETI;
		case LIBGREBE_OP_JP_C_a16:
			return &Instructions::JP_C_a16;
		case LIBGREBE_OP_CALL_C_a16:
			return &Instructions::CALL_C_a16;
		case LIBGREBE_OP_SBC_A_d8:
			return &Instructions::SBC_A_d8;
		case LIBGREBE_OP_RST_18H:
			return &Instructions::RST_18H;
		case LIBGREBE_OP_LDH_MEM_AT_a8_A:
			return &Instructions::LDH_MEM_AT_a8_A;
		case LIBGREBE_OP_POP_HL:
			return &Instructions::POP_HL;
		case LIBGREBE_OP_LD_MEM_AT_C_A:
			return &Instructions::LD_MEM_AT_C_A;
		case LIBGREBE_OP_PUSH_HL:
			return &Instructions::PUSH_HL;
		case LIBGREBE_OP_AND_d8:
			return &Instructions::AND_d8;
		case LIBGREBE_OP_RST_20H:
			return &Instructions::RST_20H;
		case LIBGREBE_OP_ADD_SP_r8:
			return &Instructions::ADD_SP_r8;
		case LIBGREBE_OP_JP_HL:
			return &Instructions::JP_HL;
		case LIBGREBE_OP_LD_MEM_AT_a16_A:
			return &Instructions::LD_MEM_AT_a16_A;
		case LIBGREBE_OP_XOR_d8:
			return &Instructions::XOR_d8;
		case LIBGREBE_OP_RST_28H:
			return &Instructions::RST_28H;
		case LIBGREBE_OP_LDH_A_MEM_AT_a8:
			return &Instructions::LDH_A_MEM_AT_a8;
		case LIBGREBE_OP_POP_AF:
			return &Instructions::POP_AF;
		case LIBGREBE_OP_LD_A_MEM_AT_C:
			return &Instructions::LD_A_MEM_AT_C;
		case LIBGREBE_OP_DI:
			return &Instructions::DI;
		case LIBGREBE_OP_PUSH_AF:
			return &Instructions::PUSH_AF;
		case LIBGREBE_OP_OR_d8:
			return &Instructions::OR_d8;
		case LIBGREBE_OP_RST_30H:
			return &Instructions::RST_30H;
		case LIBGREBE_OP_LD_HL_SP_r8:
			return &Instructions::LD_HL_SP_r8;
		case LIBGREBE_OP_LD_SP_HL:
			return &Instructions::LD_SP_HL;
		case LIBGREBE_OP_LD_A_MEM_AT_a16:
			return &Instructions::LD_A_MEM_AT_a16;
		case LIBGREBE_OP_EI:
			return &Instructions::EI;
		case LIBGREBE_OP_CP_d8:
			return &Instructions::CP_d8;
		case LIBGREBE_OP_RST_38H:
			return &Instructions::RST_38H;
		default:
			return &Instructions::Undefined;
	}
}

std::function<void(State&)> Decoder::decodeCB(const std::uint8_t& opcode)
{
	switch (opcode)
	{
		case LIBGREBE_OP_RLC_B:
			return &Instructions::RLC_B;
		case LIBGREBE_OP_RLC_C:
			return &Instructions::RLC_C;
		case LIBGREBE_OP_RLC_D:
			return &Instructions::RLC_D;
		case LIBGREBE_OP_RLC_E:
			return &Instructions::RLC_E;
		case LIBGREBE_OP_RLC_H:
			return &Instructions::RLC_H;
		case LIBGREBE_OP_RLC_L:
			return &Instructions::RLC_L;
		case LIBGREBE_OP_RLC_MEM_AT_HL:
			return &Instructions::RLC_MEM_AT_HL;
		case LIBGREBE_OP_RLC_A:
			return &Instructions::RLC_A;
		case LIBGREBE_OP_RRC_B:
			return &Instructions::RRC_B;
		case LIBGREBE_OP_RRC_C:
			return &Instructions::RRC_C;
		case LIBGREBE_OP_RRC_D:
			return &Instructions::RRC_D;
		case LIBGREBE_OP_RRC_E:
			return &Instructions::RRC_E;
		case LIBGREBE_OP_RRC_H:
			return &Instructions::RRC_H;
		case LIBGREBE_OP_RRC_L:
			return &Instructions::RRC_L;
		case LIBGREBE_OP_RRC_MEM_AT_HL:
			return &Instructions::RRC_MEM_AT_HL;
		case LIBGREBE_OP_RRC_A:
			return &Instructions::RRC_A;
		case LIBGREBE_OP_RL_B:
			return &Instructions::RL_B;
		case LIBGREBE_OP_RL_C:
			return &Instructions::RL_C;
		case LIBGREBE_OP_RL_D:
			return &Instructions::RL_D;
		case LIBGREBE_OP_RL_E:
			return &Instructions::RL_E;
		case LIBGREBE_OP_RL_H:
			return &Instructions::RL_H;
		case LIBGREBE_OP_RL_L:
			return &Instructions::RL_L;
		case LIBGREBE_OP_RL_MEM_AT_HL:
			return &Instructions::RL_MEM_AT_HL;
		case LIBGREBE_OP_RL_A:
			return &Instructions::RL_A;
		case LIBGREBE_OP_RR_B:
			return &Instructions::RR_B;
		case LIBGREBE_OP_RR_C:
			return &Instructions::RR_C;
		case LIBGREBE_OP_RR_D:
			return &Instructions::RR_D;
		case LIBGREBE_OP_RR_E:
			return &Instructions::RR_E;
		case LIBGREBE_OP_RR_H:
			return &Instructions::RR_H;
		case LIBGREBE_OP_RR_L:
			return &Instructions::RR_L;
		case LIBGREBE_OP_RR_MEM_AT_HL:
			return &Instructions::RR_MEM_AT_HL;
		case LIBGREBE_OP_RR_A:
			return &Instructions::RR_A;
		case LIBGREBE_OP_SLA_B:
			return &Instructions::SLA_B;
		case LIBGREBE_OP_SLA_C:
			return &Instructions::SLA_C;
		case LIBGREBE_OP_SLA_D:
			return &Instructions::SLA_D;
		case LIBGREBE_OP_SLA_E:
			return &Instructions::SLA_E;
		case LIBGREBE_OP_SLA_H:
			return &Instructions::SLA_H;
		case LIBGREBE_OP_SLA_L:
			return &Instructions::SLA_L;
		case LIBGREBE_OP_SLA_MEM_AT_HL:
			return &Instructions::SLA_MEM_AT_HL;
		case LIBGREBE_OP_SLA_A:
			return &Instructions::SLA_A;
		case LIBGREBE_OP_SRA_B:
			return &Instructions::SRA_B;
		case LIBGREBE_OP_SRA_C:
			return &Instructions::SRA_C;
		case LIBGREBE_OP_SRA_D:
			return &Instructions::SRA_D;
		case LIBGREBE_OP_SRA_E:
			return &Instructions::SRA_E;
		case LIBGREBE_OP_SRA_H:
			return &Instructions::SRA_H;
		case LIBGREBE_OP_SRA_L:
			return &Instructions::SRA_L;
		case LIBGREBE_OP_SRA_MEM_AT_HL:
			return &Instructions::SRA_MEM_AT_HL;
		case LIBGREBE_OP_SRA_A:
			return &Instructions::SRA_A;
		case LIBGREBE_OP_SWAP_B:
			return &Instructions::SWAP_B;
		case LIBGREBE_OP_SWAP_C:
			return &Instructions::SWAP_C;
		case LIBGREBE_OP_SWAP_D:
			return &Instructions::SWAP_D;
		case LIBGREBE_OP_SWAP_E:
			return &Instructions::SWAP_E;
		case LIBGREBE_OP_SWAP_H:
			return &Instructions::SWAP_H;
		case LIBGREBE_OP_SWAP_L:
			return &Instructions::SWAP_L;
		case LIBGREBE_OP_SWAP_MEM_AT_HL:
			return &Instructions::SWAP_MEM_AT_HL;
		case LIBGREBE_OP_SWAP_A:
			return &Instructions::SWAP_A;
		case LIBGREBE_OP_SRL_B:
			return &Instructions::SRL_B;
		case LIBGREBE_OP_SRL_C:
			return &Instructions::SRL_C;
		case LIBGREBE_OP_SRL_D:
			return &Instructions::SRL_D;
		case LIBGREBE_OP_SRL_E:
			return &Instructions::SRL_E;
		case LIBGREBE_OP_SRL_H:
			return &Instructions::SRL_H;
		case LIBGREBE_OP_SRL_L:
			return &Instructions::SRL_L;
		case LIBGREBE_OP_SRL_MEM_AT_HL:
			return &Instructions::SRL_MEM_AT_HL;
		case LIBGREBE_OP_SRL_A:
			return &Instructions::SRL_A;
		case LIBGREBE_OP_BIT_0_B:
			return &Instructions::BIT_0_B;
		case LIBGREBE_OP_BIT_0_C:
			return &Instructions::BIT_0_C;
		case LIBGREBE_OP_BIT_0_D:
			return &Instructions::BIT_0_D;
		case LIBGREBE_OP_BIT_0_E:
			return &Instructions::BIT_0_E;
		case LIBGREBE_OP_BIT_0_H:
			return &Instructions::BIT_0_H;
		case LIBGREBE_OP_BIT_0_L:
			return &Instructions::BIT_0_L;
		case LIBGREBE_OP_BIT_0_MEM_AT_HL:
			return &Instructions::BIT_0_MEM_AT_HL;
		case LIBGREBE_OP_BIT_0_A:
			return &Instructions::BIT_0_A;
		case LIBGREBE_OP_BIT_1_B:
			return &Instructions::BIT_1_B;
		case LIBGREBE_OP_BIT_1_C:
			return &Instructions::BIT_1_C;
		case LIBGREBE_OP_BIT_1_D:
			return &Instructions::BIT_1_D;
		case LIBGREBE_OP_BIT_1_E:
			return &Instructions::BIT_1_E;
		case LIBGREBE_OP_BIT_1_H:
			return &Instructions::BIT_1_H;
		case LIBGREBE_OP_BIT_1_L:
			return &Instructions::BIT_1_L;
		case LIBGREBE_OP_BIT_1_MEM_AT_HL:
			return &Instructions::BIT_1_MEM_AT_HL;
		case LIBGREBE_OP_BIT_1_A:
			return &Instructions::BIT_1_A;
		case LIBGREBE_OP_BIT_2_B:
			return &Instructions::BIT_2_B;
		case LIBGREBE_OP_BIT_2_C:
			return &Instructions::BIT_2_C;
		case LIBGREBE_OP_BIT_2_D:
			return &Instructions::BIT_2_D;
		case LIBGREBE_OP_BIT_2_E:
			return &Instructions::BIT_2_E;
		case LIBGREBE_OP_BIT_2_H:
			return &Instructions::BIT_2_H;
		case LIBGREBE_OP_BIT_2_L:
			return &Instructions::BIT_2_L;
		case LIBGREBE_OP_BIT_2_MEM_AT_HL:
			return &Instructions::BIT_2_MEM_AT_HL;
		case LIBGREBE_OP_BIT_2_A:
			return &Instructions::BIT_2_A;
		case LIBGREBE_OP_BIT_3_B:
			return &Instructions::BIT_3_B;
		case LIBGREBE_OP_BIT_3_C:
			return &Instructions::BIT_3_C;
		case LIBGREBE_OP_BIT_3_D:
			return &Instructions::BIT_3_D;
		case LIBGREBE_OP_BIT_3_E:
			return &Instructions::BIT_3_E;
		case LIBGREBE_OP_BIT_3_H:
			return &Instructions::BIT_3_H;
		case LIBGREBE_OP_BIT_3_L:
			return &Instructions::BIT_3_L;
		case LIBGREBE_OP_BIT_3_MEM_AT_HL:
			return &Instructions::BIT_3_MEM_AT_HL;
		case LIBGREBE_OP_BIT_3_A:
			return &Instructions::BIT_3_A;
		case LIBGREBE_OP_BIT_4_B:
			return &Instructions::BIT_4_B;
		case LIBGREBE_OP_BIT_4_C:
			return &Instructions::BIT_4_C;
		case LIBGREBE_OP_BIT_4_D:
			return &Instructions::BIT_4_D;
		case LIBGREBE_OP_BIT_4_E:
			return &Instructions::BIT_4_E;
		case LIBGREBE_OP_BIT_4_H:
			return &Instructions::BIT_4_H;
		case LIBGREBE_OP_BIT_4_L:
			return &Instructions::BIT_4_L;
		case LIBGREBE_OP_BIT_4_MEM_AT_HL:
			return &Instructions::BIT_4_MEM_AT_HL;
		case LIBGREBE_OP_BIT_4_A:
			return &Instructions::BIT_4_A;
		case LIBGREBE_OP_BIT_5_B:
			return &Instructions::BIT_5_B;
		case LIBGREBE_OP_BIT_5_C:
			return &Instructions::BIT_5_C;
		case LIBGREBE_OP_BIT_5_D:
			return &Instructions::BIT_5_D;
		case LIBGREBE_OP_BIT_5_E:
			return &Instructions::BIT_5_E;
		case LIBGREBE_OP_BIT_5_H:
			return &Instructions::BIT_5_H;
		case LIBGREBE_OP_BIT_5_L:
			return &Instructions::BIT_5_L;
		case LIBGREBE_OP_BIT_5_MEM_AT_HL:
			return &Instructions::BIT_5_MEM_AT_HL;
		case LIBGREBE_OP_BIT_5_A:
			return &Instructions::BIT_5_A;
		case LIBGREBE_OP_BIT_6_B:
			return &Instructions::BIT_6_B;
		case LIBGREBE_OP_BIT_6_C:
			return &Instructions::BIT_6_C;
		case LIBGREBE_OP_BIT_6_D:
			return &Instructions::BIT_6_D;
		case LIBGREBE_OP_BIT_6_E:
			return &Instructions::BIT_6_E;
		case LIBGREBE_OP_BIT_6_H:
			return &Instructions::BIT_6_H;
		case LIBGREBE_OP_BIT_6_L:
			return &Instructions::BIT_6_L;
		case LIBGREBE_OP_BIT_6_MEM_AT_HL:
			return &Instructions::BIT_6_MEM_AT_HL;
		case LIBGREBE_OP_BIT_6_A:
			return &Instructions::BIT_6_A;
		case LIBGREBE_OP_BIT_7_B:
			return &Instructions::BIT_7_B;
		case LIBGREBE_OP_BIT_7_C:
			return &Instructions::BIT_7_C;
		case LIBGREBE_OP_BIT_7_D:
			return &Instructions::BIT_7_D;
		case LIBGREBE_OP_BIT_7_E:
			return &Instructions::BIT_7_E;
		case LIBGREBE_OP_BIT_7_H:
			return &Instructions::BIT_7_H;
		case LIBGREBE_OP_BIT_7_L:
			return &Instructions::BIT_7_L;
		case LIBGREBE_OP_BIT_7_MEM_AT_HL:
			return &Instructions::BIT_7_MEM_AT_HL;
		case LIBGREBE_OP_BIT_7_A:
			return &Instructions::BIT_7_A;
		case LIBGREBE_OP_RES_0_B:
			return &Instructions::RES_0_B;
		case LIBGREBE_OP_RES_0_C:
			return &Instructions::RES_0_C;
		case LIBGREBE_OP_RES_0_D:
			return &Instructions::RES_0_D;
		case LIBGREBE_OP_RES_0_E:
			return &Instructions::RES_0_E;
		case LIBGREBE_OP_RES_0_H:
			return &Instructions::RES_0_H;
		case LIBGREBE_OP_RES_0_L:
			return &Instructions::RES_0_L;
		case LIBGREBE_OP_RES_0_MEM_AT_HL:
			return &Instructions::RES_0_MEM_AT_HL;
		case LIBGREBE_OP_RES_0_A:
			return &Instructions::RES_0_A;
		case LIBGREBE_OP_RES_1_B:
			return &Instructions::RES_1_B;
		case LIBGREBE_OP_RES_1_C:
			return &Instructions::RES_1_C;
		case LIBGREBE_OP_RES_1_D:
			return &Instructions::RES_1_D;
		case LIBGREBE_OP_RES_1_E:
			return &Instructions::RES_1_E;
		case LIBGREBE_OP_RES_1_H:
			return &Instructions::RES_1_H;
		case LIBGREBE_OP_RES_1_L:
			return &Instructions::RES_1_L;
		case LIBGREBE_OP_RES_1_MEM_AT_HL:
			return &Instructions::RES_1_MEM_AT_HL;
		case LIBGREBE_OP_RES_1_A:
			return &Instructions::RES_1_A;
		case LIBGREBE_OP_RES_2_B:
			return &Instructions::RES_2_B;
		case LIBGREBE_OP_RES_2_C:
			return &Instructions::RES_2_C;
		case LIBGREBE_OP_RES_2_D:
			return &Instructions::RES_2_D;
		case LIBGREBE_OP_RES_2_E:
			return &Instructions::RES_2_E;
		case LIBGREBE_OP_RES_2_H:
			return &Instructions::RES_2_H;
		case LIBGREBE_OP_RES_2_L:
			return &Instructions::RES_2_L;
		case LIBGREBE_OP_RES_2_MEM_AT_HL:
			return &Instructions::RES_2_MEM_AT_HL;
		case LIBGREBE_OP_RES_2_A:
			return &Instructions::RES_2_A;
		case LIBGREBE_OP_RES_3_B:
			return &Instructions::RES_3_B;
		case LIBGREBE_OP_RES_3_C:
			return &Instructions::RES_3_C;
		case LIBGREBE_OP_RES_3_D:
			return &Instructions::RES_3_D;
		case LIBGREBE_OP_RES_3_E:
			return &Instructions::RES_3_E;
		case LIBGREBE_OP_RES_3_H:
			return &Instructions::RES_3_H;
		case LIBGREBE_OP_RES_3_L:
			return &Instructions::RES_3_L;
		case LIBGREBE_OP_RES_3_MEM_AT_HL:
			return &Instructions::RES_3_MEM_AT_HL;
		case LIBGREBE_OP_RES_3_A:
			return &Instructions::RES_3_A;
		case LIBGREBE_OP_RES_4_B:
			return &Instructions::RES_4_B;
		case LIBGREBE_OP_RES_4_C:
			return &Instructions::RES_4_C;
		case LIBGREBE_OP_RES_4_D:
			return &Instructions::RES_4_D;
		case LIBGREBE_OP_RES_4_E:
			return &Instructions::RES_4_E;
		case LIBGREBE_OP_RES_4_H:
			return &Instructions::RES_4_H;
		case LIBGREBE_OP_RES_4_L:
			return &Instructions::RES_4_L;
		case LIBGREBE_OP_RES_4_MEM_AT_HL:
			return &Instructions::RES_4_MEM_AT_HL;
		case LIBGREBE_OP_RES_4_A:
			return &Instructions::RES_4_A;
		case LIBGREBE_OP_RES_5_B:
			return &Instructions::RES_5_B;
		case LIBGREBE_OP_RES_5_C:
			return &Instructions::RES_5_C;
		case LIBGREBE_OP_RES_5_D:
			return &Instructions::RES_5_D;
		case LIBGREBE_OP_RES_5_E:
			return &Instructions::RES_5_E;
		case LIBGREBE_OP_RES_5_H:
			return &Instructions::RES_5_H;
		case LIBGREBE_OP_RES_5_L:
			return &Instructions::RES_5_L;
		case LIBGREBE_OP_RES_5_MEM_AT_HL:
			return &Instructions::RES_5_MEM_AT_HL;
		case LIBGREBE_OP_RES_5_A:
			return &Instructions::RES_5_A;
		case LIBGREBE_OP_RES_6_B:
			return &Instructions::RES_6_B;
		case LIBGREBE_OP_RES_6_C:
			return &Instructions::RES_6_C;
		case LIBGREBE_OP_RES_6_D:
			return &Instructions::RES_6_D;
		case LIBGREBE_OP_RES_6_E:
			return &Instructions::RES_6_E;
		case LIBGREBE_OP_RES_6_H:
			return &Instructions::RES_6_H;
		case LIBGREBE_OP_RES_6_L:
			return &Instructions::RES_6_L;
		case LIBGREBE_OP_RES_6_MEM_AT_HL:
			return &Instructions::RES_6_MEM_AT_HL;
		case LIBGREBE_OP_RES_6_A:
			return &Instructions::RES_6_A;
		case LIBGREBE_OP_RES_7_B:
			return &Instructions::RES_7_B;
		case LIBGREBE_OP_RES_7_C:
			return &Instructions::RES_7_C;
		case LIBGREBE_OP_RES_7_D:
			return &Instructions::RES_7_D;
		case LIBGREBE_OP_RES_7_E:
			return &Instructions::RES_7_E;
		case LIBGREBE_OP_RES_7_H:
			return &Instructions::RES_7_H;
		case LIBGREBE_OP_RES_7_L:
			return &Instructions::RES_7_L;
		case LIBGREBE_OP_RES_7_MEM_AT_HL:
			return &Instructions::RES_7_MEM_AT_HL;
		case LIBGREBE_OP_RES_7_A:
			return &Instructions::RES_7_A;
		case LIBGREBE_OP_SET_0_B:
			return &Instructions::SET_0_B;
		case LIBGREBE_OP_SET_0_C:
			return &Instructions::SET_0_C;
		case LIBGREBE_OP_SET_0_D:
			return &Instructions::SET_0_D;
		case LIBGREBE_OP_SET_0_E:
			return &Instructions::SET_0_E;
		case LIBGREBE_OP_SET_0_H:
			return &Instructions::SET_0_H;
		case LIBGREBE_OP_SET_0_L:
			return &Instructions::SET_0_L;
		case LIBGREBE_OP_SET_0_MEM_AT_HL:
			return &Instructions::SET_0_MEM_AT_HL;
		case LIBGREBE_OP_SET_0_A:
			return &Instructions::SET_0_A;
		case LIBGREBE_OP_SET_1_B:
			return &Instructions::SET_1_B;
		case LIBGREBE_OP_SET_1_C:
			return &Instructions::SET_1_C;
		case LIBGREBE_OP_SET_1_D:
			return &Instructions::SET_1_D;
		case LIBGREBE_OP_SET_1_E:
			return &Instructions::SET_1_E;
		case LIBGREBE_OP_SET_1_H:
			return &Instructions::SET_1_H;
		case LIBGREBE_OP_SET_1_L:
			return &Instructions::SET_1_L;
		case LIBGREBE_OP_SET_1_MEM_AT_HL:
			return &Instructions::SET_1_MEM_AT_HL;
		case LIBGREBE_OP_SET_1_A:
			return &Instructions::SET_1_A;
		case LIBGREBE_OP_SET_2_B:
			return &Instructions::SET_2_B;
		case LIBGREBE_OP_SET_2_C:
			return &Instructions::SET_2_C;
		case LIBGREBE_OP_SET_2_D:
			return &Instructions::SET_2_D;
		case LIBGREBE_OP_SET_2_E:
			return &Instructions::SET_2_E;
		case LIBGREBE_OP_SET_2_H:
			return &Instructions::SET_2_H;
		case LIBGREBE_OP_SET_2_L:
			return &Instructions::SET_2_L;
		case LIBGREBE_OP_SET_2_MEM_AT_HL:
			return &Instructions::SET_2_MEM_AT_HL;
		case LIBGREBE_OP_SET_2_A:
			return &Instructions::SET_2_A;
		case LIBGREBE_OP_SET_3_B:
			return &Instructions::SET_3_B;
		case LIBGREBE_OP_SET_3_C:
			return &Instructions::SET_3_C;
		case LIBGREBE_OP_SET_3_D:
			return &Instructions::SET_3_D;
		case LIBGREBE_OP_SET_3_E:
			return &Instructions::SET_3_E;
		case LIBGREBE_OP_SET_3_H:
			return &Instructions::SET_3_H;
		case LIBGREBE_OP_SET_3_L:
			return &Instructions::SET_3_L;
		case LIBGREBE_OP_SET_3_MEM_AT_HL:
			return &Instructions::SET_3_MEM_AT_HL;
		case LIBGREBE_OP_SET_3_A:
			return &Instructions::SET_3_A;
		case LIBGREBE_OP_SET_4_B:
			return &Instructions::SET_4_B;
		case LIBGREBE_OP_SET_4_C:
			return &Instructions::SET_4_C;
		case LIBGREBE_OP_SET_4_D:
			return &Instructions::SET_4_D;
		case LIBGREBE_OP_SET_4_E:
			return &Instructions::SET_4_E;
		case LIBGREBE_OP_SET_4_H:
			return &Instructions::SET_4_H;
		case LIBGREBE_OP_SET_4_L:
			return &Instructions::SET_4_L;
		case LIBGREBE_OP_SET_4_MEM_AT_HL:
			return &Instructions::SET_4_MEM_AT_HL;
		case LIBGREBE_OP_SET_4_A:
			return &Instructions::SET_4_A;
		case LIBGREBE_OP_SET_5_B:
			return &Instructions::SET_5_B;
		case LIBGREBE_OP_SET_5_C:
			return &Instructions::SET_5_C;
		case LIBGREBE_OP_SET_5_D:
			return &Instructions::SET_5_D;
		case LIBGREBE_OP_SET_5_E:
			return &Instructions::SET_5_E;
		case LIBGREBE_OP_SET_5_H:
			return &Instructions::SET_5_H;
		case LIBGREBE_OP_SET_5_L:
			return &Instructions::SET_5_L;
		case LIBGREBE_OP_SET_5_MEM_AT_HL:
			return &Instructions::SET_5_MEM_AT_HL;
		case LIBGREBE_OP_SET_5_A:
			return &Instructions::SET_5_A;
		case LIBGREBE_OP_SET_6_B:
			return &Instructions::SET_6_B;
		case LIBGREBE_OP_SET_6_C:
			return &Instructions::SET_6_C;
		case LIBGREBE_OP_SET_6_D:
			return &Instructions::SET_6_D;
		case LIBGREBE_OP_SET_6_E:
			return &Instructions::SET_6_E;
		case LIBGREBE_OP_SET_6_H:
			return &Instructions::SET_6_H;
		case LIBGREBE_OP_SET_6_L:
			return &Instructions::SET_6_L;
		case LIBGREBE_OP_SET_6_MEM_AT_HL:
			return &Instructions::SET_6_MEM_AT_HL;
		case LIBGREBE_OP_SET_6_A:
			return &Instructions::SET_6_A;
		case LIBGREBE_OP_SET_7_B:
			return &Instructions::SET_7_B;
		case LIBGREBE_OP_SET_7_C:
			return &Instructions::SET_7_C;
		case LIBGREBE_OP_SET_7_D:
			return &Instructions::SET_7_D;
		case LIBGREBE_OP_SET_7_E:
			return &Instructions::SET_7_E;
		case LIBGREBE_OP_SET_7_H:
			return &Instructions::SET_7_H;
		case LIBGREBE_OP_SET_7_L:
			return &Instructions::SET_7_L;
		case LIBGREBE_OP_SET_7_MEM_AT_HL:
			return &Instructions::SET_7_MEM_AT_HL;
		case LIBGREBE_OP_SET_7_A:
			return &Instructions::SET_7_A;
		default:
			return &Instructions::Undefined;
	}
}
