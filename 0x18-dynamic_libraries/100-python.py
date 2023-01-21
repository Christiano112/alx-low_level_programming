from ctypes import *

operations = ctypes.CDLL('./100-operations.so')
result = operations.add(3, 5)
print(result)
