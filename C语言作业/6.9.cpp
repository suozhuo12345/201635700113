/****************
 arr: ����
 length:���鳤��
 value:Ҫ���ҵ�ֵ
 *****************/
void Find(int *arr, int length, int value)
{
	if(length <= 0)
	{
		printf("�Ҳ���");
		return;
		//return -1;
	}

	int low = 0;
	int high = length -1;

	while (low <= high) {
		int middle = (low + high)/2;
		if (value == arr[middle]) {
			printf("�ڵ� %d ��λ�÷���ֵ��%d\n", middle+1, value);
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
	printf("�Ҳ���");
	//return -1;
}
