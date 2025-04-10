import sys
if sys.prefix == '/home/gordon/miniconda3':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/gordon/grasp/install/my_python_package'
