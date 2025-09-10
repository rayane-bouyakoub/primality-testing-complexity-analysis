# Primality Testing - Complexity Analysis

A comparative study of three primality testing algorithms, analyzing their theoretical complexity against experimental performance.

## 🔍 Overview

This project implements and analyzes three versions of primality testing algorithms:
1. **Naive Algorithm** - Tests divisors from 2 to N-1
2. **First Optimization** - Tests divisors from 2 to N/2  
3. **Second Optimization** - Tests divisors from 2 to √N

## 📊 Complexity Analysis

| Algorithm | Best Case | Worst Case |
|-----------|-----------|------------|
| Naive     | O(1)      | O(N)       |
| First Opt | O(1)      | O(N)       |
| Second Opt| O(1)      | O(√N)      |

## 🚀 Performance Results

The optimized algorithm achieves up to **21,000x** speedup for large prime numbers compared to the naive approach.

## 🛠️ Implementation

- **Language**: C
- **Focus**: Precise execution time measurements
- **Testing**: 1000 iterations for accuracy

## 📈 Key Findings

- Theoretical complexity matches experimental results
- Constant ~3x speedup with first optimization
- Exponential performance gains with square root optimization
- All algorithms maintain identical accuracy

## 🎯 Educational Purpose

This project demonstrates:
- Big O notation in practice
- Algorithm optimization techniques
- Theoretical vs experimental analysis
- Performance measurement methodologies

---

*Part of Complexity and Problem Solving at École nationale Supérieure d'Informatique*