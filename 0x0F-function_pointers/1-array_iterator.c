
/**
 * array_iterator - execute a given function on each element of an array.
 *
 * @array: the given arry
 * @size: size of the array
 * @action: pointer to the function to call
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action && size > 0)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
