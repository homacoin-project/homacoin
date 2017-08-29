from distutils.core import setup
setup(name='btcspendfrom',
      version='1.0',
      description='Command-line utility for homacoin "coin control"',
      author='Gregory',
      author_email='homacoin@gmail.com',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
