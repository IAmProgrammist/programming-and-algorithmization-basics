SET(generators generators/generateRandom.c               generators/generateRandom.h
               generators/generateOrdered.c              generators/generateOrdered.h
               generators/generateOrderedBackwards.c     generators/generateOrderedBackwards.h)

SET(sorters    sorters/bubbleSort.c                      sorters/bubbleSort.h
               sorters/selectionSort.c                   sorters/selectionSort.h
               sorters/insertionSort.c                   sorters/insertionSort.h
               sorters/combSort.c                        sorters/combSort.h
               sorters/shellSort.c                       sorters/shellSort.h sorters/radixSort.c sorters/radixSort.h)

add_library(tester tester.c tester.h ${generators} ${sorters})