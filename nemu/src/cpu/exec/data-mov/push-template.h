#include "cpu/exec/template-start.h"

#define instr push

static void do_execute() {
		int len;
		if(DATA_BYTE == 2) len = 2; else len = 4;
		cpu.esp -= len;
		swaddr_write(cpu.esp, len, op_src->val, R_SS);
		print_asm_template1();
}

make_instr_helper(r)

#include "cpu/exec/template-end.h"
