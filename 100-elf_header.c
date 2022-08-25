typedef struct
{
	unsigned char e_ident[EI_NIDENT];
	uint16_t e_type;
	uint16_t e_version;
	ElfN_Addr e_entry;	/* Work on this type */
} elf_hdr
