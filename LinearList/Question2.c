void Del_X_1(Linklist &L, ElemType x) {
	//LΪ��ͷ�ڵ�ĵ�����,���㷨ɾ��L������ֵΪx�Ľ��
	LNode *p = L->next, *pre = L, *q//��p��pre�ĳ�ʼֵ
		while (p != NULL) {
			if (p->data == x) {
				q = p;//qָ��ý��
				p = p->next;
				pre->next = p;//ɾ��*q���
				free(q);//�ͷ�*q���Ŀռ�
			}
			else {//����,pre��pͬ������
				pre = p;
				p = p->next;
			}//else
		}//while
}