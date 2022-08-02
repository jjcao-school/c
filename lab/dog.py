class Cat(object):
	def __init__(self, age=0):
		self._age = age

	def getHumanAge(self):
		return self._age

	def setHumanAge(self, value):
		self._age = value

	def getAge(self):
		return self._age * 7

	def setAge(self, value):
		self._age = value / 7

class Dog(object):
	def __init__(self, age=0):
		self.humanAge = age

	@property
	def humanAge(self):
		return self._age

	@humanAge.setter
	def humanAge(self, value):
		self._age = value

	@property
	def dogAge(self):
		return self._age * 7

	@dogAge.setter
	def dogAge(self, value):
		self._age = value / 7

if __name__ == '__main__':
    c = Cat(age=5)
    print(c.getHumanAge())
    print(c.getAge())

    d = Dog(age=4)
    print(d.humanAge)
    print(d.dogAge)

    d.humanAge = 5
    print(d.humanAge)
    print(d.dogAge)

    d.dogAge = 42
    print(d.humanAge)
    print(d.dogAge)
