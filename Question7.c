void RangeDelete(LinkList &L, int min, int max) {
	LNode *pr = L, *p = L->next;
	while(p!=NULL)
		if (p->data > min&&p->data < max) {//Ѱ�ҵ���ɾ���,ɾ��
			pr->next = p->next;
			free(p);
			p = pr->next;
		}
		else {//�������Ѱ�ұ�ɾ���
			pr = p;
			p = p->next;
		}
}