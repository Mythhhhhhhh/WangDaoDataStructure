/*
�㷨˼��:����ֱ�Ӳ��������㷨��˼��,�ȹ���ֻ��һ�����ݽ�����������,Ȼ������ɨ�赥������ʣ�µĽ��*p(ֱ��p==NULLΪֹ),���������ͨ���Ƚϲ��Ҳ���*p��ǰ�����*pre,Ȼ��*p���뵽pre֮��*/
void Sort(LinkList &L) {
	//���㷨ʵ�ֽ�������L�Ľ������,ʹ���������
	LNode *p = L->next, *pre;
	LNode *r = p->next;//r����*p��̽��ָ��,�Ա�֤������
	p->next = NULL;//����ֻ��һ�����ݽ��������
	while (p != NULL) {
		r = p->next;
		pre = L;
		while (pre->next != NULL&&pre->next->data < p->data)
			pre = pre->next;//��������в��Ҳ���*p��ǰ�����*pre
		r->next = pre->next;//��*p���뵽*pre֮��
		pre->next = p;
		p = r;//ɨ��ԭ��������ʣ�µĽ��
	}
}
