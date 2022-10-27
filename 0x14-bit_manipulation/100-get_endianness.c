/**
 * get_endianness - Gets the endianness of a machine
 *
 * get_endianness - Gets the endianness of a machine
 */
int get_endianness(void)
{
	int x;
	char *y;

	y = (char *)&x;
	return (*y + 48);
}
