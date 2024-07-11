class Stack {
    constructor() {
        this.arr = [];
        this.index = 0;
    }

    push(item) {
        this.arr[this.index++] = item;
    }

    pop() {
        if (this.index <= 0) return null;

        const result = this.arr[--this.index];

        return result;
    }

    peek() {
        if (this.arr === 0) {
            return null;
        }

        return this.arr[this.arr.length - 1];
    }

    getSize() {
        return this.arr.length;
    }
}

let stack = new Stack();
stack.push(1);
console.log(stack.pop());
