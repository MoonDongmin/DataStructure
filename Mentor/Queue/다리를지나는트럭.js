function solution(bridge_length, weight, truck_weights) {
    let answer = 0;
    let bridge = Array.from({length: bridge_length}, () => 0);
    console.log(bridge);
    let current_weight = 0;

    while (bridge.length > 0) {
        answer++;
        current_weight -= bridge.shift();

        if (truck_weights.length > 0) {
            if (current_weight + truck_weights[0] <= weight) {
                let truck = truck_weights.shift();
                bridge.push(truck);
                current_weight += truck;
            } else {
                bridge.push(0);
            }
        }
        console.log(bridge);
    }

    return answer;
}

// function s(bridge_length, weight, truck_weights) {
//     let answer = 0;
//     let bridge = Array(bridge_length).fill(0);
//     let current_weight = 0;
//
//     for (answer = 0; bridge.length > 0; answer++) {
//         current_weight -= bridge.shift();
//
//         if (truck_weights.length > 0) {
//             if (current_weight + truck_weights[0] <= weight) {
//                 let truck = truck_weights.shift();
//                 bridge.push(truck);
//                 current_weight += truck;
//             } else {
//                 bridge.push(0);
//             }
//         }
//     }
//
//     return answer;
// }


console.log(solution(2, 10, [7, 4, 5, 6]));
