#ifndef _CPU_H_
#define _CPU_H_

// Holds all information about the CPU
struct cpu
{
  // PC
  unsigned int PC;
  // registers (array)
  unsigned char reg[8];
  // ram (array)
  unsigned char ram[256];
  // Flags 00000LGE
  unsigned char FL;
};

// ALU operations
enum alu_op
{
  ALU_ADD,
  ALU_CMP,
  ALU_MUL
};

// Instructions

// These use binary literals. If these aren't available with your compiler, hex
// literals should be used.

#define ADD 0b10100000
#define CALL 0b01010000
#define CMP 0b10100111
#define DEC
#define HLT 0b00000001
#define INC
#define IRET 0b00010011
#define JEQ
#define JMP 0b01010100
#define LD
#define LDI 0b10000010
#define MUL 0b10100010
#define POP 0b01000110
#define PRA 0b01001000
#define PRN 0b01000111
#define PUSH 0b01000101
#define RET 0b00010001
#define ST 0b10000100

// Function declarations

extern void cpu_load(struct cpu *cpu, char *file);
extern void cpu_init(struct cpu *cpu);
extern void cpu_run(struct cpu *cpu);

#endif
