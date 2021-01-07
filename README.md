Thi repository implements the Distributed Gauss-Seidel algorithm for pose graph optimization in addition to the Pairwise Consistency Maximization for outlier rejection.

If you use this work, please cite any of the following publications:

For the distributed PGO implementation cite:

```
@inproceedings{Choudhary16icra,
  author    = {Siddharth Choudhary and
               Luca Carlone and
	       Carlos Nieto and
	       John Rogers and
               Henrik I. Christensen and
               Frank Dellaert},
  title     = {Distributed Trajectory Estimation with Privacy and Communication Constraints: 
a Two-Stage Distributed Gauss-Seidel Approach},
  booktitle = {IEEE International Conference on Robotics and Automation 2016},
  year      = {2016}
}
```
```
@article{Choudhary17arXiv,
  author    = {Siddharth Choudhary and
               Luca Carlone and
               Carlos Nieto{-}Granda and
               John G. Rogers III and
               Henrik I. Christensen and
               Frank Dellaert},
  title     = {Distributed Mapping with Privacy and Communication Constraints: Lightweight
               Algorithms and Object-based Models},
  journal   = {CoRR},
  volume    = {abs/1702.03435},
  year      = {2017},
  url       = {http://arxiv.org/abs/1702.03435},
}
```

For the outlier rejection implementation cite:


```

@article{lajoieDOORSLAMDistributedOnline2020,
  title = {{{DOOR}}-{{SLAM}}: {{Distributed}}, {{Online}}, and {{Outlier Resilient SLAM}} for {{Robotic Teams}}},
  shorttitle = {{{DOOR}}-{{SLAM}}},
  author = {Lajoie, Pierre-Yves and Ramtoula, Benjamin and Chang, Yun and Carlone, Luca and Beltrame, Giovanni},
  year = {2020},
  month = apr,
  volume = {5},
  pages = {1656--1663},
  issn = {2377-3766},
  doi = {10.1109/LRA.2020.2967681},
  number = {2}
}
```