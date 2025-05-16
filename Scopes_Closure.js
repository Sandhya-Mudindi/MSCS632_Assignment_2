function outerFunction() {
    let message = "Hello from outer scope.js";

    function innerFunction() {
        console.log(message);
    }

    return innerFunction;
}

const myClosure = outerFunction();
myClosure(); 


