#include <stdio.h>
void bubble_sort(int * arr)
{
int i = 0, tmp;

while (arr[i] != '\0')
{
tmp = arr[i];
if (arr[i] > arr[i + 1] && arr[i + 1] != '\0')
{
arr[i] = arr[i + 1];
arr[i + 1] = tmp;
}
i++;
}
}
int main() {

// Write C code here
int arr[10] = {3, 2, 10, 5};

bubble_sort(arr);
printf("%i, %i, %i, %i\n", arr[0], arr[1], arr[2], arr[3]);

return 0;

}
