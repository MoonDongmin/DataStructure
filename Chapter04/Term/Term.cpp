#include "Term.h"
int main(int argc, char *argv[])
{
	PolyList *pListA = NULL;
	PolyList *pListB = NULL;
	PolyList *pListC = NULL;

	pListA = createLinkedList();
	pListB = createLinkedList();

	if (pListA != NULL && pListB != NULL)
	{
		// 다항식 초기화.
		// pListA: 7x^6 + 3x^5 + 5x^2
		// pListB: 1x^5 + 2x^4 + 3x^2 + 4x^0
		addPolyNodeLast(pListA, 7, 6);
		addPolyNodeLast(pListA, 3, 5);
		addPolyNodeLast(pListA, 5, 2);
		displayPolyList(pListA);

		addPolyNodeLast(pListB, 1, 5);
		addPolyNodeLast(pListB, 2, 4);
		addPolyNodeLast(pListB, 3, 2);
		addPolyNodeLast(pListB, 4, 0);
		displayPolyList(pListB);

		pListC = polyAdd(pListA, pListB);
		if (pListC != NULL) {
			displayPolyList(pListC);
			deleteLinkedList(pListC);
		}

		deleteLinkedList(pListA);
		deleteLinkedList(pListB);
	}

	return 0;
}

