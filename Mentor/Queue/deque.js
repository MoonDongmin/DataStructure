class Deque {
    constructor() {
        this.items = [];
    }

    add_front(element) {
        return this.items.unshift(element);
    }


    add_rear(element) {
        return this.items.push(element);
    }

    delete_front() {
        return this.items.shift();
    }

    delete_rear() {
        return this.items.pop();
    }

    get_front() {
        return this.items[0];
    }

    get_rear() {
        return this.items[this.items.length - 1];
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

    end() {
        if (this.isEmpty()) {
            return '빈 큐 입니다.'
        }
        return this.items[this.items.length - 1];
    }

    isEmpty() {
        if (this.items.length === 0) {
            return "빈 큐 입니다."
        }
    }

    size() {
        return this.items.length;
    }

    clear() {
        this.items = [];
    }
}
