LinkList Search_1st_Common(LinkList L1, LinkList L2) {
	//���㷨ʵ�������Ե�ʱ�����ҵ�����������ĵ�һ���������
	int len1 = Length(L1), len2 = Length(L2);//������������ı�
	LinkList longList, shortList;//�ֱ�ָ����ϳ��ĺͽ϶̵�����
	if (len1 > len2) {
		longList = L1->next;
		shortList = L2->next;
		dist = len1 - len2;//��֮��
	}
	else {
		longList = L2->next;
		shortList = L1->next;
		dist = len2 - len1;//��֮��
	}
	while (dist--)//���������ȱ�������dist�����,Ȼ��ͬ��
		longList = longList->next;
	while (longList != NULL) {//ͬ��Ѱ�ҹ�ͬ���
		if (longList == shortList)
			return longList;
		else {//����ͬ��Ѱ��
			longList = longList->next;
			short = short->next;
		}
	}//while
	return NULL;
}