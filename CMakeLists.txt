cmake_minimum_required(VERSION 3.17)
project(CodingInterviewGuide)

set(CMAKE_CXX_STANDARD 11)

add_executable(main main.cpp)

add_executable(GetMinStackTest chapter01/get_min_stack_test.cpp chapter01/get_min_stack.h chapter01/get_min_stack.cpp)
add_executable(GetMinStackTest2 chapter01/get_min_stack_test2.cpp chapter01/get_min_stack2.h chapter01/get_min_stack2.cpp)
add_executable(TwoStackAsQueueTest chapter01/two_stack_as_queue_test.cpp chapter01/two_stack_as_queue.h chapter01/two_stack_as_queue.cpp)
add_executable(GetAndRemoveLastElementTest chapter01/reverse_stack_test.cpp chapter01/reverse_stack.h chapter01/reverse_stack.cpp)
add_executable(DogCatQueueTest chapter01/dog_cat_queue_test.cpp chapter01/dog_cat_queue.h chapter01/dog_cat_queue.cpp)
add_executable(StackSortTest chapter01/stack_sort_test.cpp chapter01/stack_sort.h chapter01/stack_sort.cpp)
add_executable(HanoiTest chapter01/hanoi_test.cpp chapter01/hanoi.h chapter01/hanoi.cpp)
add_executable(HanoiTest2 chapter01/hanoi_test2.cpp chapter01/hanoi2.h chapter01/hanoi2.cpp)
add_executable(WindowMaxTest chapter01/window_max_test.cpp chapter01/window_max.h chapter01/window_max.cpp)
add_executable(MonotonicStackTest chapter01/monotonic_stack_test.cpp chapter01/monotonic_stack.h chapter01/monotonic_stack.cpp)
add_executable(MaximumSubmatrixTest chapter01/maximum_submatrix_test.cpp chapter01/maximum_submatrix.h chapter01/maximum_submatrix.cpp)
add_executable(MaxSubMinLessNumTest chapter01/max_sub_min_less_num_test.cpp chapter01/max_sub_min_less_num.h chapter01/max_sub_min_less_num.cpp)
add_executable(MountainPairNumberTest chapter01/mountain_pair_number_test.cpp chapter01/mountain_pair_number.h chapter01/mountain_pair_number.cpp)

add_executable(CommonPartOrderedListTest chapter02/common_part_ordered_list_test.cpp chapter02/common_part_ordered_list.h chapter02/common_part_ordered_list.cpp chapter02/node.h chapter02/node.cpp)
add_executable(LastKNodeTest chapter02/last_k_node_test.cpp chapter02/last_k_node.h chapter02/last_k_node.cpp chapter02/node.h chapter02/node.cpp)
add_executable(MidNodeTest chapter02/mid_node_test.cpp chapter02/mid_node.h chapter02/mid_node.cpp chapter02/node.h chapter02/node.cpp)
add_executable(ReverseListTest chapter02/reverse_list_test.cpp chapter02/reverse_list.h chapter02/reverse_list.cpp chapter02/node.h chapter02/node.cpp)
add_executable(ReversePartTest chapter02/reverse_part_test.cpp chapter02/reverse_part.h chapter02/reverse_part.cpp chapter02/node.h chapter02/node.cpp)
add_executable(Josephus chapter02/josephus_test.cpp chapter02/josephus.h chapter02/josephus.cpp chapter02/node.h chapter02/node.cpp)
add_executable(PalindromeListTest chapter02/palindrome_list_test.cpp chapter02/palindrome_list.h chapter02/palindrome_list.cpp chapter02/node.h chapter02/node.cpp)
add_executable(PartitionListTest chapter02/partition_list_test.cpp chapter02/partition_list.h chapter02/partition_list.cpp chapter02/node.h chapter02/node.cpp)
add_executable(CopyRandPointerListTest chapter02/copy_rand_pointer_list_test.cpp chapter02/copy_rand_pointer_list.h chapter02/copy_rand_pointer_list.cpp)
add_executable(AddTwoListTest chapter02/add_two_list_test.cpp chapter02/add_two_list.h chapter02/add_two_list.cpp chapter02/node.h chapter02/node.cpp)
add_executable(LoopList chapter02/loop_list_test.cpp chapter02/loop_list.h chapter02/loop_list.cpp chapter02/node.h chapter02/node.cpp)
add_executable(ReverseKNodeTest chapter02/reverse_k_node_test.cpp chapter02/reverse_k_node.h chapter02/reverse_k_node.cpp chapter02/node.h chapter02/node.cpp)
add_executable(DeleteRepeatNodeTest chapter02/delete_repeat_node_test.cpp chapter02/delete_repeat_node.h chapter02/delete_repeat_node.cpp chapter02/node.h chapter02/node.cpp)
add_executable(DeleteValueNodeTest chapter02/delete_value_node_test.cpp chapter02/delete_value_node.h chapter02/delete_value_node.cpp chapter02/node.h chapter02/node.cpp)
add_executable(BinarySearchTreeDoubleListTest chapter02/binary_search_tree_double_list_test.cpp chapter02/binary_search_tree_double_list.h chapter02/binary_search_tree_double_list.cpp)
add_executable(LinkListSelectionSortTest chapter02/link_list_selection_sort_test.cpp chapter02/link_list_selection_sort.h chapter02/link_list_selection_sort.cpp chapter02/node.h chapter02/node.cpp)
add_executable(DeleteNodePointerTest chapter02/delete_node_pointer_test.cpp chapter02/delete_node_pointer.h chapter02/delete_node_pointer.cpp chapter02/node.h chapter02/node.cpp)
add_executable(InsertSortedLoopListTest chapter02/insert_sorted_loop_list_test.cpp chapter02/insert_sorted_loop_list.h chapter02/insert_sorted_loop_list.cpp chapter02/node.h chapter02/node.cpp)
add_executable(MergeTwoSortedLinkListTest chapter02/merge_two_sorted_link_list_test.cpp chapter02/merge_two_sorted_link_list.h chapter02/merge_two_sorted_link_list.cpp chapter02/node.h chapter02/node.cpp)
add_executable(RelocateLinkListTest chapter02/relocate_link_list_test.cpp chapter02/relocate_link_list.h chapter02/relocate_link_list.cpp chapter02/node.h chapter02/node.cpp)

add_executable(TraverseBinaryTreeTest chapter03/traverse_binary_tree_test.cpp chapter03/traverse_binary_tree.h chapter03/traverse_binary_tree.cpp chapter03/node.h)
add_executable(PrintEdgeNodeTest chapter03/print_edge_node_test.cpp chapter03/print_edge_node.h chapter03/print_edge_node.cpp chapter03/node.h)
add_executable(PrintBinaryTreeTest chapter03/print_binary_tree_test.cpp chapter03/print_binary_tree.h chapter03/print_binary_tree.cpp chapter03/node.h)
add_executable(BinaryTreeSerializationTest chapter03/binary_tree_serialization_test.cpp chapter03/binary_tree_serialization.h chapter03/binary_tree_serialization.cpp chapter03/traverse_binary_tree.h chapter03/traverse_binary_tree.cpp chapter03/node.h)