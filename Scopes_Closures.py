def outer_function():
    message = "Hello from outer scope.py"

    def inner_function():
        print(message)

    return inner_function

my_closure = outer_function()
my_closure()  
