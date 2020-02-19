import unittest
import sys
import cppimport

sys.path.append("./python")
greeter = cppimport.imp("greeter")

class TestStringMethods(unittest.TestCase):

    def test_getName(self):
        jason = greeter.Greeter("Jason")
        self.assertEqual(jason.getName(), "Jason")

    def test_setName(self):
        jason = greeter.Greeter("Jason")
        jason.setName("Jason Smith")
        self.assertEqual(jason.getName(), "Jason Smith")


if __name__ == '__main__':
    unittest.main()