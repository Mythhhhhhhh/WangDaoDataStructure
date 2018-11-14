void RangeDelete(LinkList &L, int min, int max) {
	LNode *pr = L, *p = L->next;
	while(p!=NULL)
		if (p->data > min&&p->data < max) {//寻找到被删结点,删除
			pr->next = p->next;
			free(p);
			p = pr->next;
		}
		else {//否则继续寻找被删结点
			pr = p;
			p = p->next;
		}
}