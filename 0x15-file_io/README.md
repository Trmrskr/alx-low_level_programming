# 0x15. C - File I/O

Tasks 0: Tread lightly, she is near

Write a function that reads a text file and prints it to the POSIX standard output.
Prototype: ssize_t read_textfile(const char *filename, size_t letters);
where letters is the number of letters it should read and print
returns the actual number of letters it could read and print
If the file cannot be opend or read, return 0
if filename is NULL return 0
if write fails or does not write the expected amount of bytes, return 0.
File: 0-read_textfile.c

Tasks 1. Under the snow
Create a function that creates a file.
Prototype: int create_file(const char *filename, char *text_content);
where filename is the name of the file to create and text_content is a NULL terminated string to write to the file
Returns: 1 on success, -1 on failure (file can not be created, file can not be written, write "fails", etc...)
The created file must have thos permissions: rw----------. If the file already exists, do not change the permissions.
If the file already exists, truncate it
If the filename is NULL return -1
If text_content is NULL create an empty file
File: 1-create_file.c

Tasks 2. Speak gently, she can hear
Write a function that appends text at the end of a file.
Prototype: ;int append_text_to_file(const char *filename, char *text_content);
where filename is the name of the file and text_content is the NULL terminated string to add at the end of the file
Return: 1 on success and -1 on failure
Do not create the file if it does not exist
If filename is NULL return -1
If text_content is NULL, do not add anything to the file. Return 1 if the file exists and -1 if the file does not exist or if you do not have the reequired permissions to write the file.


