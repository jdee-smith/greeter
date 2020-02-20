import unittest
import sys
import cppimport

sys.path.append("./python")
greeter = cppimport.imp("greeter")

class TestStringMethods(unittest.TestCase):

    def test_access(self):
        jason = greeter.Greeter("Jason")
        jason.setName("Jason Smith")
        self.assertEqual(jason.getName(), "Jason Smith")

    def test_square(self):
        jason = greeter.Greeter("Jason")
        self.assertEqual(jason.square([1, 2, 3]), [1, 4, 9])


if __name__ == '__main__':
    unittest.main()