void R_Print(LinkList L) {
	//��ͷ��β���������L��ÿ������ֵ
	if (L->next != NULL) {
		R_Print(L->next);//�ݹ�
	}//if
	printf("L->data");
}