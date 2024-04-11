#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
        int i;
	int lt = 0;
	int rt;

	/* Validate array */
        if (!(array))
                return (-1);

        for (lt = 0, rt = size - 1; rt >= lt;)
        {
                printf("Searching in array: ");
                for (i = lt; i < rt; i++)
                        printf("%d, ", array[i]);
                printf("%d\n", array[i]);

                i = lt + (rt - lt) / 2;
                if (array[i] == value)
                        return (i);
                if (array[i] > value)
                        rt = i - 1;
                else
                        lt = i + 1;
        }

        return (-1);
}
