void Min_Delete(LinkList &head) {
	//head�Ǵ�ͷ�ڵ�ĵ������ͷָ��,���㷨������˳������������е�����Ԫ��
	while (head->next != NULL) {//ѭ������ʣͷ�ڵ�
		pre = head;//preΪԪ����Сֵ����ǰ������ָ��
		p = pre->next;//pΪ����ָ��
		while (P->next != NULL) {
			pre = p;//��ס��ǰ��Сֵ����ǰ��
			p = p->next;
		}
		printf(pre->next->data);//���Ԫ����Сֵ��������
		u = pre->next;
		pre->next = u->next;
		free(u);
	}//while
	free(head);//�ͷ�ͷ�ڵ�
}