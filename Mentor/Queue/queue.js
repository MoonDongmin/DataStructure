class Queue {
    constructor() {
        this.items = [];
    }

    enqueue(element) {
        this.items.push(element);
    }

    dequeue() {
        if (this.isEmpty()) {
            return 'Underflow'; // 큐가 비어 있으면 underflow 반환
        }
        return this.items.shift();
    }

    front() {
        if (this.isEmpty()) {
            return '빈 큐 입니다.';
        }
        return this.items[0];
    }

    isEmpty() {
        return this.items.length == 0;
    }

    size() {
        return this.items.length;
    }

    clear() {
        this.items = [];
    }
}

let queue = new Queue();
queue.enqueue(1);
queue.enqueue(2);
queue.enqueue(3);
console.log(queue.size());
console.log(queue.front());


