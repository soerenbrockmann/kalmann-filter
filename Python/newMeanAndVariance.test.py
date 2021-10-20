import unittest
from newMeanAndVariance import update

class TestNewMeanAndVariance (unittest.TestCase):

    def test_update(self):
        result = update(10.,8.,13., 2.)
        self.assertEqual(result, [12.4, 1.6000000000000001])

if __name__ == '__main__':
    unittest.main()