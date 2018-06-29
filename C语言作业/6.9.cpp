/****************
 arr: 数组
 length:数组长度
 value:要查找的值
 *****************/
void Find(int *arr, int length, int value)
{
	if(length <= 0)
	{
		printf("找不到");
		return;
		//return -1;
	}

	int low = 0;
	int high = length -1;

	while (low <= high) {
		int middle = (low + high)/2;
		if (value == arr[middle]) {
			printf("在第 %d 个位置发现值：%d\n", middle+1, value);
			return;
			//return middle;
		}
		if (value > arr[middle]) {
			low = middle +1;
		}
		if (value < arr[middle]) {
			high = middle -1;
		}
		printf("middlege:%d\n", middle);
	}
	printf("找不到");
	//return -1;
}
