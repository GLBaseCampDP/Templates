// ExportFunctionTemplate.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <stdio.h> 

static void trace() { printf("File 1\n"); }

// declaration only
export template <class T> T const& min(T const&, T const&);


int main() {
	trace();
	return min(2, 3);
}

