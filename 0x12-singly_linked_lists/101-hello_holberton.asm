	global	main /* defining the main as an entry point */
	extern	printf
	/* defining the usage of the printf function by an external library */

main:
	/* The main function marks the beginning of the main function */
	mov   edi, format /* moves the address of the format into the edi register */
	xor   eax, eax /* The eax register is used to store the return value of a function */
	call  printf /*  calls the printf function, passing the format string as the first argument */
	mov     eax, 0 /* on success, sets the eax register to 0 */
	ret /* return control from function main */

format:	db `Hello, Holberton\n`,0
