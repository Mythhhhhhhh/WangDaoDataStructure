LinkList Reverse_1(LinkList L) {
	//L�Ǵ�ͷ�ڵ�ĵ�����,���㷨��L�͵�����
	LNode *p, *r;//pΪ����ָ��
	p = L->next;//�ӵ�һ��Ԫ�ؽ�㿪ʼ
	L->next = NULL;//�Ƚ�ͷ�ڵ�L��next����ΪNULL
	while (p != NULL) {//���ν�Ԫ�ؽ��ժ��
		r = p->next;
		p->next = L->next;
		L->next = p;
		p = r;
	}
	return L;
}

LinkList Reverse_2(LinkList L) {
	//���α������Ա�L���������ָ�뷴ת
	LNode *pre, *p = L->next, *r = p->next;
	p->next = NULL;//�����һ�����
	while (r != NULL) {//rΪ��,��˵��pΪ���һ�����
		pre = p;//���μ�������
		p = r;
		r = r->next;
		p->next = pre;//ָ�뷴ת
	}
	L->next = p;//�������һ�����
	return L;
}