LinkList Delete_Min(LinkList &L) {
	//L�Ǵ�ͷ�ڵ�ĵ�����,���㷨ɾ������Сֵ���
	LNode *pre = L, *p = pre->next;//pΪ����ָ��,preָ����ǰ��
	LNode *minpre = pre, *minp = p;//������Сֵ��㼰��ǰ��
	while (p != NULL) {
		if (p->data < min->data) {
			minp = p;//�ҵ���֮ǰ�ҵ�����Сֵ��С�Ľ��
			minpre = pre;
		}
		pre = p;//����ɨ����һ�����
		p = p->next;
	}
	minpre->next = minp->next;//ɾ����Сֵ���
	free(minp);
	return L;
}