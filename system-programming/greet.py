#!/anaconda3/bin/python

import os

fout = os.open("bar", os.O_WRONLY | os.O_CREAT, 0o644)

os.write(fout, bytes("Hello, World!\n", "UTF-8"))
os.close(fout)


