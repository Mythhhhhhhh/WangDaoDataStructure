void Del_X_3(Linklist &L, ElemType x) {
	//�ݹ�ʵ���ڵ�����L��ɾ��ֵΪx�Ľڵ�
	LNode *p;//pָ���ɾ���Ľڵ�
	if (L == NULL)//�ݹ����
		return;
	if (L->data == x) {//��L��ָ����ֵΪx
		p = L;         //ɾ��*L,����Lָ����һ���  
		L = L->next;
		free(p);
		Del_X_3(L, x);//�ݹ����
	}
	else//��L��ָ����ֵ��Ϊx
		Del_X_3(L->next, x);//�ݹ����2
}   