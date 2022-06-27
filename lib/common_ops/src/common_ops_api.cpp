#include <torch/extension.h>
#include <torch/serialize/tensor.h>

#include "common_ops.h"

PYBIND11_MODULE(TORCH_EXTENSION_NAME, m){
    // SoftGroup
    m.def("sg_bfs_cluster", &sg_bfs_cluster, "sg_bfs_cluster");
    m.def("get_mask_iou_on_cluster", &get_mask_iou_on_cluster, "get_mask_iou_on_cluster");
    m.def("get_mask_iou_on_pred", &get_mask_iou_on_pred, "get_mask_iou_on_pred");
    m.def("get_mask_label", &get_mask_label, "get_mask_label");
    m.def("global_avg_pool_fp", &global_avg_pool_fp, "global_avg_pool_fp");
    m.def("global_avg_pool_bp", &global_avg_pool_bp, "global_avg_pool_bp");

    // Common
    m.def("voxelize_idx", &voxelize_idx_3d, "voxelize_idx");
    m.def("voxelize_fp", &voxelize_fp_feat, "voxelize_fp");
    m.def("voxelize_bp", &voxelize_bp_feat, "voxelize_bp");
    m.def("ballquery_batch_p", &ballquery_batch_p, "ballquery_batch_p");
    m.def("sec_mean", &sec_mean, "sec_mean");
    m.def("sec_min", &sec_min, "sec_min");
    m.def("sec_max", &sec_max, "sec_max");

    // PointGroup
    m.def("point_recover_fp", &point_recover_fp_feat, "point_recover_fp");
    m.def("point_recover_bp", &point_recover_bp_feat, "point_recover_bp");
    m.def("pg_bfs_cluster", &pg_bfs_cluster, "pg_bfs_cluster");
    m.def("roipool_fp", &roipool_fp, "roipool_fp");
    m.def("roipool_bp", &roipool_bp, "roipool_bp");
    m.def("get_iou", &get_iou, "get_iou");
}