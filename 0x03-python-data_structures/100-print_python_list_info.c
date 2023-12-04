#include <stdio.h>
#include <Python.h>

/**
 * print_python_list_info - prints info about a python list
 * @p: PyObject
 *
 * Return: void
 */

void print_python_list_info(PyObject *p)
{
    long int size, idx;
    PyListObject *gp;
    PyObject *item;

    size = Py_SIZE(p);
    printf("[*] Size of the Python List = %ld\n", size);

    gp = (PyListObject *)p;
    printf("[*] Allocated = %ld\n", gp->allocated);

    for (idx = 0; idx < size; idx++)
    {
        item = PyList_GetItem(p, idx);
        printf("Element %ld: %s\n", idx, Py_TYPE(item)->tp_name);
    }
}
