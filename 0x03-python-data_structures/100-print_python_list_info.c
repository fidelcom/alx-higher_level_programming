#include <Python.h>
#include <object.h>
#include <listobject.h>

void print_python_list_info(PyObject *p)
{
	long int size = PyList_Size(p);
	int idx;
	PyListObject *obj = (PyListObject *)p;

	printf("[*] Size of the Python List = %li\n", size);
	printf("[*] Allocated = %li\n", obj->allocated);
	for (idx = 0; idx < size; idx++)
	{
		printf("Element %i: %s\n", i, Py_TYPE(obj->ob_item[i])->tp_name);
	}
}
